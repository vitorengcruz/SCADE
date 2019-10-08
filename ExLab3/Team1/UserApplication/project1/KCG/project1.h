/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Repositorio_ITA/SCADE/ExLab3/Team1/UserApplication/project1/KCG/config.txt
** Generation date: 2019-10-08T09:17:07
*************************************************************$ */
#ifndef _project1_H_
#define _project1_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* SignalFromButton/, _L3/ */ SignalFromButton;
  kcg_bool /* @1/Input/, @1/_L4/, SignalFromTeam2/, _L4/ */ SignalFromTeam2;
} inC_project1;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ReqLayerVisible/ */ ReqLayerVisible;
  kcg_bool /* ReqLayerActive/, _L2/ */ ReqLayerActive;
  kcg_bool /* SignalToTeam2/ */ SignalToTeam2;
  kcg_bool /* EmitToCDS/, _L9/ */ EmitToCDS;
  kcg_uint8 /* SignalToLED/, _L6/ */ SignalToLED;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* @1/_L3/ */ _L3_Toggle_1;
  kcg_bool /* _L1/ */ _L1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_project1;

/* ===========  node initialization and cycle functions  =========== */
/* project1/ */
extern void project1(inC_project1 *inC, outC_project1 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void project1_reset(outC_project1 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void project1_init(outC_project1 *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: project1/
  @1: (Toggle#1)
*/

#endif /* _project1_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** project1.h
** Generation date: 2019-10-08T09:17:07
*************************************************************$ */

