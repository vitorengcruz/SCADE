#include "project2_interface.h"
#include "project2_snapshot.h"
#include "SmuVTable.h"
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif
const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "da2d42b4ba6c8e29ea7e6584aeb404e8";
const char* _SCSIM_SmuTypesCheckSum = "3093108411c6570b9c21d7b04ee1db2c";

/*******************************
 * Validity
 *******************************/
int valid(void * pHandle) {
    return 1;
}
int notvalid(void * pHandle) {
    return 0;
}

/*******************************
 * Simulation context
 *******************************/
inC_project2 inputs_ctx;
static inC_project2 inputs_ctx_restore;
static inC_project2 inputs_ctx_execute;
outC_project2 outputs_ctx;

/* separate_io: inputs instanciation */

/* separate_io: outputs instanciation */

static void _SCSIM_RestoreInterface(void) {
    inputs_ctx.SignalFromTeam1 = inputs_ctx_restore.SignalFromTeam1;
    inputs_ctx.SignalFromButton = inputs_ctx_restore.SignalFromButton;
    memset((void*)&outputs_ctx, 0,  sizeof(outputs_ctx));

    /* separate_io: outputs restore */
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    inputs_ctx_execute.SignalFromTeam1 = inputs_ctx.SignalFromTeam1;
    inputs_ctx_execute.SignalFromButton = inputs_ctx.SignalFromButton;
    pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

/*******************************
 * Init/Reset function encapsulation
 *******************************/
int SimInit(void) {
    int nRet=0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif /* EXTENDED_SIM */
#ifndef KCG_USER_DEFINED_INIT
    project2_init(&outputs_ctx);
    nRet=1;
#else /* KCG_USER_DEFINED_INIT */
    nRet=0;
#endif /* KCG_USER_DEFINED_INIT */
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif /* EXTENDED_SIM */
    return nRet;
}

int SimReset(void) {
    int nRet=0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif /* EXTENDED_SIM */
#ifndef KCG_NO_EXTERN_CALL_TO_RESET
    project2_reset(&outputs_ctx);
    nRet=1;
#else /* KCG_NO_EXTERN_CALL_TO_RESET */
    nRet=0;
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif /* EXTENDED_SIM */
    return nRet;
}

#ifdef __cplusplus
  #ifdef pSimoutC_project2CIVTable_defined
    extern struct SimCustomInitVTable *pSimoutC_project2CIVTable;
  #else 
    struct SimCustomInitVTable *pSimoutC_project2CIVTable = NULL;
  #endif
#else
  struct SimCustomInitVTable *pSimoutC_project2CIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_project2CIVTable != NULL
        && pSimoutC_project2CIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_project2CIVTable->m_pfnCustomInit ((void*)&outputs_ctx);
    } else {
        /* VTable misssing => error */
        nRet = 0;
    }
    return nRet;
}

#ifdef EXTENDED_SIM
int GraphicalInputsConnected = 1;
#endif /* EXTENDED_SIM */
/*******************************
 * Cyclic function encapsulation
 *******************************/
int SimStep(void) {
#ifdef EXTENDED_SIM
    if (GraphicalInputsConnected)
        BeforeSimStep();
#endif /* EXTENDED_SIM */
    _SCSIM_ExecuteInterface();
    project2(&inputs_ctx_execute, &outputs_ctx);
#ifdef EXTENDED_SIM
    AfterSimStep();
#endif /* EXTENDED_SIM */
    return 1;
}

int SimStop(void) {
#ifdef EXTENDED_SIM
    ExtendedSimStop();
#endif /* EXTENDED_SIM */
    return 1;
}

int SsmGetDumpSize(void) {
    int nSize = 0;
    nSize += sizeof(inC_project2);

/* separate_io: add (not in ctx) inputs size */

/* separate_io: add (not in ctx) outputs size */
    nSize += sizeof(outC_project2);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif /* EXTENDED_SIM */
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &inputs_ctx, sizeof(inC_project2));
    pCurrent += sizeof(inC_project2);

    /* separate_io: dump (not in ctx) inputs */

    /* separate_io: dump (not in ctx) outputs */
    memcpy(pCurrent, &outputs_ctx, sizeof(outC_project2));
    pCurrent += sizeof(outC_project2);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&inputs_ctx, pCurrent, sizeof(inC_project2));
    pCurrent += sizeof(inC_project2);

    /* separate_io: restore (not in ctx) inputs */

    /* separate_io: restore (not in ctx) outputs */
    memcpy(&outputs_ctx, pCurrent, sizeof(outC_project2));
    pCurrent += sizeof(outC_project2);
#ifdef EXTENDED_SIM
    ExtendedRestoreDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

int SsmSaveSnapshot(const char * szFilePath, size_t nCycle) {
    return save_snapshot(szFilePath, nCycle,
        &inputs_ctx,
        &outputs_ctx);
}

int SsmLoadSnapshot(const char * szFilePath, size_t *nCycle) {
    return load_snapshot(szFilePath, nCycle,
        &inputs_ctx,
        &outputs_ctx);
}

const char * SsmGetCheckSum() {
    return _SCSIM_CheckSum;
}

const char * SsmGetSmuTypesCheckSum() {
    return _SCSIM_SmuTypesCheckSum;
}

void SsmUpdateValues(void) {
#ifdef EXTENDED_SIM
    UpdateValues();
#endif /* EXTENDED_SIM */
}

void SsmConnectExternalInputs(int bConnect) {
#ifdef EXTENDED_SIM
    GraphicalInputsConnected = bConnect;
#endif /* EXTENDED_SIM */
}

#ifdef __cplusplus
} /* "C" */
#endif
