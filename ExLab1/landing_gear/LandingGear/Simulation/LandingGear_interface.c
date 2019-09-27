#include "LandingGear_interface.h"
#include "LandingGear_type.h"
#include "LandingGear_mapping.h"
#include "SmuVTable.h"
#include <string.h>

#define UNUSED(x) (void)(x)
/* context */

inC_LandingGear inputs_ctx;
static inC_LandingGear inputs_ctx_execute;
outC_LandingGear outputs_ctx;

static void _SCSIM_RestoreInterface(void) {
    init_kcg_bool(&inputs_ctx.LG_UpBtn);
    init_kcg_bool(&inputs_ctx_execute.LG_UpBtn);
    init_kcg_bool(&inputs_ctx.LG_FailBtn);
    init_kcg_bool(&inputs_ctx_execute.LG_FailBtn);
    memset((void*)&outputs_ctx, 0, sizeof(outputs_ctx));
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    inputs_ctx_execute.LG_UpBtn = inputs_ctx.LG_UpBtn;
    inputs_ctx_execute.LG_FailBtn = inputs_ctx.LG_FailBtn;
    pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

#ifdef __cplusplus
extern "C" {
#endif

const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "47c5fafd723e1083f4f49846488e4efa";
const char* _SCSIM_SmuTypesCheckSum = "1d4140d2de3b3e910e8a148dd1cf7a1a";

/* simulation */

int SimInit(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_USER_DEFINED_INIT
    LandingGear_init(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

int SimReset(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_NO_EXTERN_CALL_TO_RESET
    LandingGear_reset(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

#ifdef __cplusplus
    #ifdef pSimoutC_LandingGearCIVTable_defined
        extern struct SimCustomInitVTable *pSimoutC_LandingGearCIVTable;
    #else 
        struct SimCustomInitVTable *pSimoutC_LandingGearCIVTable = NULL;
    #endif
#else
    struct SimCustomInitVTable *pSimoutC_LandingGearCIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_LandingGearCIVTable != NULL && 
        pSimoutC_LandingGearCIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_LandingGearCIVTable->m_pfnCustomInit ((void*)&outputs_ctx);
    }
    else {
        /* VTable misssing => error */
        nRet = 0;
    }
    return nRet;
}

#ifdef EXTENDED_SIM
    int GraphicalInputsConnected = 1;
#endif

int SimStep(void) {
#ifdef EXTENDED_SIM
    if (GraphicalInputsConnected)
        BeforeSimStep();
#endif
    _SCSIM_ExecuteInterface();
    LandingGear(&inputs_ctx_execute, &outputs_ctx);
#ifdef EXTENDED_SIM
    AfterSimStep();
#endif
    return 1;
}

int SimStop(void) {
#ifdef EXTENDED_SIM
    ExtendedSimStop();
#endif
    return 1;
}

void SsmUpdateValues(void) {
#ifdef EXTENDED_SIM
    UpdateValues();
#endif
}

void SsmConnectExternalInputs(int bConnect) {
#ifdef EXTENDED_SIM
    GraphicalInputsConnected = bConnect;
#else
    UNUSED(bConnect);
#endif
}

/* dump */

int SsmGetDumpSize(void) {
    int nSize = 0;
    nSize += sizeof(inC_LandingGear);
    nSize += sizeof(outC_LandingGear);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &inputs_ctx, sizeof(inC_LandingGear));
    pCurrent += sizeof(inC_LandingGear);
    memcpy(pCurrent, &outputs_ctx, sizeof(outC_LandingGear));
    pCurrent += sizeof(outC_LandingGear);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&inputs_ctx, pCurrent, sizeof(inC_LandingGear));
    pCurrent += sizeof(inC_LandingGear);
    memcpy(&outputs_ctx, pCurrent, sizeof(outC_LandingGear));
    pCurrent += sizeof(outC_LandingGear);
#ifdef EXTENDED_SIM
    ExtendedRestoreDumpData(pCurrent);
#endif
}

/* snapshot */

int SsmSaveSnapshot(const char * szFilePath, size_t nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

int SsmLoadSnapshot(const char * szFilePath, size_t *nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

/* checksum */

const char * SsmGetCheckSum() {
    return _SCSIM_CheckSum;
}

const char * SsmGetSmuTypesCheckSum() {
    return _SCSIM_SmuTypesCheckSum;
}

#ifdef __cplusplus
} /* "C" */
#endif

