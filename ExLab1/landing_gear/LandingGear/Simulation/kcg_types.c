/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Repositorio_ITA/SCADE/ExLab1/landing_gear/LandingGear/Simulation/config.txt
** Generation date: 2019-09-26T07:55:03
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_T_String
kcg_bool kcg_comp_T_String(T_String *kcg_c1, T_String *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_T_String */

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** kcg_types.c
** Generation date: 2019-09-26T07:55:03
*************************************************************$ */

