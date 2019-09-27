#ifndef LANDINGGEAR_INTERFACE_H_
#define LANDINGGEAR_INTERFACE_H_

#include "kcg_types.h"
#include "kcg_sensors.h"
#include "SmuProxy.h"
#include "LandingGear.h"

/* context */

extern inC_LandingGear inputs_ctx;
extern outC_LandingGear outputs_ctx;

#ifdef __cplusplus
extern "C" {
#endif

extern SimSimulator * pSimulator;

/* simulation */

#ifdef EXTENDED_SIM
    void BeforeSimInit();
    void AfterSimInit();
    void BeforeSimStep();
    void AfterSimStep();
    void ExtendedSimStop();
    void ExtendedGatherDumpData(char * pData);
    void ExtendedRestoreDumpData(const char * pData);
    int ExtendedGetDumpSize();
    void UpdateValues();
    extern void UpdateSimulatorValues();
    extern int GraphicalInputsConnected;
#endif

/* logging */

#define SIM_INFO    1
#define SIM_WARNING 2
#define SIM_ERROR   3
extern void SsmOutputMessage(int level, const char* str);

#ifdef __cplusplus
} /* "C" */
#endif

#endif /* LANDINGGEAR_INTERFACE_H_ */
