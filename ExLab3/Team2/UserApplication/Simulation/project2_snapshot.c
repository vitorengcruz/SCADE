#include "project2_snapshot.h"
#include "project2_type.h"
#include "SmuLib.h"
#include "SmuVTable.h"
#include "stdio.h"

#ifdef _MSC_VER
  #define snprintf _snprintf
#endif

const char* szKcgTraceCheckSum = "6cb31f2b134c1b3a9469b7759988626b";

/*********************************************
 * Snapshot Save functions
 *********************************************/
int save_var(const char *cpath, const void *pValue, const void *pBaseAddr, PFN_TYPE_TO_STRING pfnTypeToString, FILE *snsFile) {
    int bOK = 1;
    SimString strValue;
    SimStringAlloc(&strValue);
    bOK &= (pfnTypeToString(pValue, SimStringAppend, &strValue) != 0);
    bOK &= (fprintf(snsFile, "%s\t[offset=%u]\t%s\n", SimStringGet(&strValue), (size_t)pValue-(size_t)pBaseAddr, cpath) >= 0);
    SimStringFree(&strValue);
    return bOK;
}

int save_field(const char *cpath, const char *proj, const void *pValue, const void *pBaseAddr, PFN_TYPE_TO_STRING pfnTypeToString, FILE *snsFile) {
    int bOK = 1;
    SimString strCPath;
    SimStringAlloc(&strCPath);
    SimStringAppend(cpath, &strCPath);
    SimStringAppend(proj, &strCPath);
    bOK = save_var(SimStringGet(&strCPath), pValue, pBaseAddr, pfnTypeToString, snsFile);
    SimStringFree(&strCPath);
    return bOK;
}

typedef int(*PFN_SAVE_CONTEXT)(const char *cpath, const void *pValue, const void *pBaseAddr, FILE *snsFile);

int save_context(const char *cpath, const char *proj, const void *pValue, const void *pBaseAddr, PFN_SAVE_CONTEXT pfnSaveContext, FILE *snsFile) {
    int bOK = 1;
    SimString strCPath;
    SimStringAlloc(&strCPath);
    SimStringAppend(cpath, &strCPath);
    SimStringAppend(proj, &strCPath);
    bOK = pfnSaveContext(SimStringGet(&strCPath), pValue, pBaseAddr, snsFile);
    SimStringFree(&strCPath);
    return bOK;
}

int save_inC_project2(const char *cpath, const inC_project2 *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bOK = 1;
    bOK &= save_field(cpath, ".SignalFromTeam1", (const void *)(&pValue->SignalFromTeam1), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".SignalFromButton", (const void *)(&pValue->SignalFromButton), pBaseAddr, kcg_bool_to_string, snsFile); 
    return bOK;
}

int save_outC_project2(const char *cpath, const outC_project2 *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bOK = 1;
    bOK &= save_field(cpath, ".SignalToLED", (const void *)(&pValue->SignalToLED), pBaseAddr, kcg_int_to_string, snsFile); 
    bOK &= save_field(cpath, ".EmitToCDS", (const void *)(&pValue->EmitToCDS), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".SignalToTeam1", (const void *)(&pValue->SignalToTeam1), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".ReqLayerActive", (const void *)(&pValue->ReqLayerActive), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".ReqLayerVisible", (const void *)(&pValue->ReqLayerVisible), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init", (const void *)(&pValue->init), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L9", (const void *)(&pValue->_L9), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L3_1", (const void *)(&pValue->_L3_1), pBaseAddr, kcg_bool_to_string, snsFile); 
    return bOK;
}

int save_snapshot(const char *szFilePath, size_t nCycle,
                      inC_project2 *inC,
                      outC_project2 *outC) {
    int bOK = 1;
    char savRealFormat[MAX_REAL_FORMAT_LEN];
    FILE *snsFile = fopen(szFilePath, "w");
    if ( !snsFile )
        return 0;

    /* Force real number format to 17 significant digits */
    strcpy(savRealFormat, pConverter->m_RealFormat);
    strcpy(pConverter->m_RealFormat, "%.17g");

    /* Write mapping file checksum */
    bOK &= (fprintf(snsFile, "%s\n", szKcgTraceCheckSum) >= 0);

    /* Write cycle counter */
    bOK &= (fprintf(snsFile, "%u\n", nCycle) >= 0);

    /* Write all context variables */
    bOK &= save_inC_project2("inC", inC, (const void*)inC, snsFile);
    bOK &= save_outC_project2("outC", outC, (const void*)outC, snsFile);

    /* Restore real number format */
    strcpy(pConverter->m_RealFormat, savRealFormat);
    fclose(snsFile);
    return bOK;
}
/*********************************************
 * Snapshot Load functions
 *********************************************/
int read_line(FILE *snsFile, SimString *pstrLine) {
    char buf[1024];
    size_t bufLen;
    SimStringReset(pstrLine);
    if (feof(snsFile))
        return 0;
    /* Read entire line */
    while (fgets(buf, 100, snsFile) != NULL) {
        SimStringAppend(buf, pstrLine);
        if (buf[strlen(buf) - 1] == '\n')
            break;
    }
    /* Remove end of line characters */
    while (pstrLine->m_nLength >=0 && pstrLine->m_pszBase[pstrLine->m_nLength-1] == '\n' || pstrLine->m_pszBase[pstrLine->m_nLength-1] == '\r') {
        pstrLine->m_pszBase[pstrLine->m_nLength-1] = '\0';
        pstrLine->m_nLength--;
    }
    return 1;
}

int load_var(void *pValue, PFN_STRING_TO_TYPE pfnStringToType, FILE *snsFile) {
    int bOK = 1;
    char *endptr;
    SimString strLine;
    SimStringAlloc(&strLine);
    bOK = read_line(snsFile, &strLine);
    if (bOK)
        bOK = (pfnStringToType(SimStringGet(&strLine), pValue, &endptr) != 0
            && (*endptr=='\t' || *endptr=='\0' || *endptr==' '));
    SimStringFree(&strLine);
    return bOK;
}

int load_inC_project2(inC_project2 *pValue, FILE *snsFile) {
    int bOK = 1;
    bOK &= load_var((void *)(&pValue->SignalFromTeam1), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->SignalFromButton), string_to_kcg_bool, snsFile); 
    return bOK;
}

int load_outC_project2(outC_project2 *pValue, FILE *snsFile) {
    int bOK = 1;
    bOK &= load_var((void *)(&pValue->SignalToLED), string_to_kcg_int, snsFile); 
    bOK &= load_var((void *)(&pValue->EmitToCDS), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->SignalToTeam1), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->ReqLayerActive), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->ReqLayerVisible), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L2), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L9), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L3_1), string_to_kcg_bool, snsFile); 
    return bOK;
}

int load_snapshot(const char *szFilePath, size_t *nCycle,
                      inC_project2 *inC,
                      outC_project2 *outC) {
    int bOK = 1;
    FILE *snsFile = fopen(szFilePath, "r");
    SimString strLine;
    SimStringAlloc(&strLine);
    if ( !snsFile )
        return 0;

    /* Read and verify mapping file checksum */
    bOK = read_line(snsFile, &strLine);
    if (bOK)
        bOK = strcmp(SimStringGet(&strLine), szKcgTraceCheckSum)==0;

    /* Read cycle counter */
    if (bOK)
        bOK = (fscanf(snsFile, "%u\n", nCycle) == 1);

    /* Read all context variables */
    if (bOK) {
        bOK &= load_inC_project2(inC, snsFile);
        bOK &= load_outC_project2(outC, snsFile);
    }

    fclose(snsFile);
    SimStringFree(&strLine);
    return bOK;
}
