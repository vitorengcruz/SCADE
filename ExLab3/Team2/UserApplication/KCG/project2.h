/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Listex_2/Team2/UserApplication/KCG/config.txt
** Generation date: 2016-08-24T02:14:44
*************************************************************$ */
#ifndef _project2_H_
#define _project2_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* project2::SignalFromTeam1 */ SignalFromTeam1;
  kcg_bool /* project2::SignalFromButton */ SignalFromButton;
} inC_project2;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* project2::SignalToLED */ SignalToLED;
  kcg_bool /* project2::EmitToCDS */ EmitToCDS;
  kcg_bool /* project2::SignalToTeam1 */ SignalToTeam1;
  kcg_bool /* project2::ReqLayerActive */ ReqLayerActive;
  kcg_bool /* project2::ReqLayerVisible */ ReqLayerVisible;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* project2::_L9 */ _L9;
  kcg_bool /* project2::_L2 */ _L2;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_project2;

/* ===========  node initialization and cycle functions  =========== */
/* project2 */
extern void project2(inC_project2 *inC, outC_project2 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void project2_reset(outC_project2 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void project2_init(outC_project2 *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _project2_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** project2.h
** Generation date: 2016-08-24T02:14:44
*************************************************************$ */

