/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Listex_2/Team1/UserApplication/KCG/config.txt
** Generation date: 2016-08-24T07:26:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "project1.h"

#ifndef KCG_USER_DEFINED_INIT
void project1_init(outC_project1 *outC)
{
  outC->ReqLayerVisible = kcg_true;
  outC->ReqLayerActive = kcg_true;
  outC->SignalToTeam2 = kcg_true;
  outC->EmitToCDS = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L5 = kcg_true;
  outC->init = kcg_true;
  outC->SignalToLED = kcg_int_lit(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void project1_reset(outC_project1 *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* project1 */
void project1(inC_project1 *inC, outC_project1 *outC)
{
  /* toggle::_L5 */ kcg_bool _L5_1;
  
  outC->EmitToCDS = kcg_true;
  outC->SignalToTeam2 = inC->SignalFromButton;
  /* 1_fby_1_init_1 */ if (kcg_cond(outC->init)) {
    outC->ReqLayerVisible = kcg_true;
    outC->init = kcg_false;
    _L5_1 = kcg_false;
  }
  else {
    outC->ReqLayerVisible = outC->_L5;
    _L5_1 = outC->_L3;
  }
  outC->_L5 = kcg_false;
  outC->ReqLayerActive = outC->ReqLayerVisible;
  /* 1 */ if (kcg_cond(inC->SignalFromTeam2)) {
    outC->_L3 = kcg_not(_L5_1);
  }
  else {
    outC->_L3 = _L5_1;
  }
  /* 1 */ if (kcg_cond(outC->_L3)) {
    outC->SignalToLED = GREEN;
  }
  else {
    outC->SignalToLED = RED;
  }
}

void kcg_save_SV_project1(SV_project1 *SV, outC_project1 *outC)
{
  SV->init = outC->init;
  SV->_L5 = outC->_L5;
  SV->_L3 = outC->_L3;
}

void kcg_load_SV_project1(outC_project1 *outC, SV_project1 *SV)
{
  outC->init = SV->init;
  outC->_L5 = SV->_L5;
  outC->_L3 = SV->_L3;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** project1.c
** Generation date: 2016-08-24T07:26:15
*************************************************************$ */

