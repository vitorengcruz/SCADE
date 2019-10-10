/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Listex_2/Team1/UserApplication/KCG/config.txt
** Generation date: 2016-08-24T07:26:15
*************************************************************$ */
#ifndef _project1_H_
#define _project1_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* project1::SignalFromButton */ SignalFromButton;
  kcg_bool /* project1::SignalFromTeam2 */ SignalFromTeam2;
} inC_project1;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* project1::ReqLayerVisible */ ReqLayerVisible;
  kcg_bool /* project1::ReqLayerActive */ ReqLayerActive;
  kcg_bool /* project1::SignalToTeam2 */ SignalToTeam2;
  kcg_bool /* project1::EmitToCDS */ EmitToCDS;
  kcg_int /* project1::SignalToLED */ SignalToLED;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* project1::_L3 */ _L3;
  kcg_bool /* project1::_L5 */ _L5;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_project1;

/* ===========  node initialization and cycle functions  =========== */
/* project1 */
extern void project1(inC_project1 *inC, outC_project1 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void project1_reset(outC_project1 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void project1_init(outC_project1 *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* project1::_L5 */ _L5;
  kcg_bool /* project1::_L3 */ _L3;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_project1;

extern void kcg_save_SV_project1(SV_project1 *SV, outC_project1 *outC);
extern void kcg_load_SV_project1(outC_project1 *outC, SV_project1 *SV);

#endif /* _project1_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** project1.h
** Generation date: 2016-08-24T07:26:15
*************************************************************$ */

