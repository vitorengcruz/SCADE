/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Repositorio_ITA/SCADE/ExLab3/Team2/UserApplication/project2/KCG/config.txt
** Generation date: 2019-10-08T09:16:58
*************************************************************$ */
#ifndef _project2_H_
#define _project2_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* SignalFromButton/, _L9/ */ SignalFromButton;
  kcg_bool /* @1/Input/, @1/_L1/, SignalFromTeam1/, _L4/ */ SignalFromTeam1;
} inC_project2;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ReqLayerVisible/ */ ReqLayerVisible;
  kcg_bool /* ReqLayerActive/, _L3/ */ ReqLayerActive;
  kcg_bool /* SignalToTeam1/ */ SignalToTeam1;
  kcg_bool /* EmitToCDS/, _L10/ */ EmitToCDS;
  kcg_uint8 /* SignalToLED/, _L6/ */ SignalToLED;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* @1/_L4/ */ _L4_Toggle_1;
  kcg_bool /* _L2/ */ _L2;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
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
** Generation date: 2019-10-08T09:16:58
*************************************************************$ */

