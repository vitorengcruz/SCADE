/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Repositorio_ITA/SCADE/ExLab2/FuelManagement/KCG/config.txt
** Generation date: 2019-09-29T22:23:11
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_intMsg
kcg_bool kcg_comp_intMsg(intMsg *kcg_c1, intMsg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Value == kcg_c2->Value);
  kcg_equ = kcg_equ & (kcg_c1->Emit == kcg_c2->Emit);
  return kcg_equ;
}
#endif /* kcg_use_intMsg */

#ifdef kcg_use_intMsg2
kcg_bool kcg_comp_intMsg2(intMsg2 *kcg_c1, intMsg2 *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Value == kcg_c2->Value);
  kcg_equ = kcg_equ & (kcg_c1->Emit == kcg_c2->Emit);
  return kcg_equ;
}
#endif /* kcg_use_intMsg2 */

#ifdef kcg_use_BoolMsg
kcg_bool kcg_comp_BoolMsg(BoolMsg *kcg_c1, BoolMsg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Value == kcg_c2->Value);
  kcg_equ = kcg_equ & (kcg_c1->Emit == kcg_c2->Emit);
  return kcg_equ;
}
#endif /* kcg_use_BoolMsg */

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** kcg_types.c
** Generation date: 2019-09-29T22:23:11
*************************************************************$ */

