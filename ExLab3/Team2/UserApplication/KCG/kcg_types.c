/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Listex_2/Team2/UserApplication/KCG/config.txt
** Generation date: 2016-08-24T02:14:44
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_LutIndex_lut
kcg_bool kcg_comp_LutIndex_lut(LutIndex_lut *kcg_c1, LutIndex_lut *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->f == kcg_c2->f);
  kcg_equ = kcg_equ & (kcg_c1->k == kcg_c2->k);
  return kcg_equ;
}
#endif /* kcg_use_LutIndex_lut */

/* $**************** KCG Version 6.4 (build i21) ****************
** kcg_types.c
** Generation date: 2016-08-24T02:14:44
*************************************************************$ */

