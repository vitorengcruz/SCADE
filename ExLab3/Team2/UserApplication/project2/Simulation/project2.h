/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Repositorio_ITA/SCADE/ExLab3/Team2/UserApplication/project2/Simulation/config.txt
** Generation date: 2019-10-07T16:38:44
*************************************************************$ */
#ifndef _project2_H_
#define _project2_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* SignalFromButton/ */ SignalFromButton;
  kcg_bool /* SignalFromTeam1/ */ SignalFromTeam1;
} inC_project2;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ReqLayerVisible/ */ ReqLayerVisible;
  kcg_bool /* ReqLayerActive/ */ ReqLayerActive;
  kcg_bool /* SignalToTeam1/ */ SignalToTeam1;
  kcg_bool /* EmitToCDS/ */ EmitToCDS;
  kcg_uint8 /* SignalToLED/ */ SignalToLED;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* @1/_L4/ */ _L4_Toggle_1;
  kcg_bool /* _L2/ */ _L2;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/Output/ */ Output_Toggle_1;
  kcg_bool /* @1/Input/ */ Input_Toggle_1;
  kcg_bool /* @1/_L3/ */ _L3_Toggle_1;
  kcg_bool /* @1/_L2/ */ _L2_Toggle_1;
  kcg_bool /* @1/_L1/ */ _L1_Toggle_1;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_uint8 /* _L6/ */ _L6;
  kcg_uint8 /* _L7/ */ _L7;
  kcg_uint8 /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
} outC_project2;

/* ===========  node initialization and cycle functions  =========== */
/* project2/ */
extern void project2(inC_project2 *inC, outC_project2 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void project2_reset(outC_project2 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void project2_init(outC_project2 *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: project2/
  @1: (Toggle#1)
*/

#endif /* _project2_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** project2.h
** Generation date: 2019-10-07T16:38:44
*************************************************************$ */

