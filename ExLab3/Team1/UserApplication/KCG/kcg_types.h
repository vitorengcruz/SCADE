/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Listex_2/Team1/UserApplication/KCG/config.txt
** Generation date: 2016-08-24T07:26:15
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_int
#define kcg_int kcg_int
typedef int kcg_int;
#endif /* kcg_int */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_real
#define kcg_real kcg_real
typedef double kcg_real;
#endif /* kcg_real */

#ifndef kcg_char
#define kcg_char kcg_char
typedef char kcg_char;
#endif /* kcg_char */

#ifndef kcg_int_lit
#define kcg_int_lit(kcg_C1) ((kcg_int) (kcg_C1))
#endif /* kcg_int_lit */

#ifndef kcg_real_lit
#define kcg_real_lit(kcg_C1) ((kcg_real) (kcg_C1))
#endif /* kcg_real_lit */

#ifndef kcg_ior
#define kcg_ior(kcg_C1) ((kcg_int) (kcg_C1))
#endif /* kcg_ior */

#ifndef kcg_roi
#define kcg_roi(kcg_C1) ((kcg_real) (kcg_C1))
#endif /* kcg_roi */

#ifndef kcg_false
#define kcg_false ((kcg_bool) kcg_int_lit(0))
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) kcg_int_lit(1))
#endif /* kcg_true */

#ifndef kcg_or
#define kcg_or(kcg_C1, kcg_C2) ((kcg_C1) | (kcg_C2))
#endif /* kcg_or */

#ifndef kcg_and
#define kcg_and(kcg_C1, kcg_C2) ((kcg_C1) & (kcg_C2))
#endif /* kcg_and */

#ifndef kcg_fge
#define kcg_fge(kcg_C1, kcg_C2) ((kcg_C1) >= (kcg_C2))
#endif /* kcg_fge */

#ifndef kcg_fgt
#define kcg_fgt(kcg_C1, kcg_C2) ((kcg_C1) > (kcg_C2))
#endif /* kcg_fgt */

#ifndef kcg_fle
#define kcg_fle(kcg_C1, kcg_C2) ((kcg_C1) <= (kcg_C2))
#endif /* kcg_fle */

#ifndef kcg_flt
#define kcg_flt(kcg_C1, kcg_C2) ((kcg_C1) < (kcg_C2))
#endif /* kcg_flt */

#ifndef kcg_ige
#define kcg_ige(kcg_C1, kcg_C2) ((kcg_C1) >= (kcg_C2))
#endif /* kcg_ige */

#ifndef kcg_igt
#define kcg_igt(kcg_C1, kcg_C2) ((kcg_C1) > (kcg_C2))
#endif /* kcg_igt */

#ifndef kcg_ile
#define kcg_ile(kcg_C1, kcg_C2) ((kcg_C1) <= (kcg_C2))
#endif /* kcg_ile */

#ifndef kcg_ilt
#define kcg_ilt(kcg_C1, kcg_C2) ((kcg_C1) < (kcg_C2))
#endif /* kcg_ilt */

#ifndef kcg_fdiv
#define kcg_fdiv(kcg_C1, kcg_C2) ((kcg_C1) / (kcg_C2))
#endif /* kcg_fdiv */

#ifndef kcg_fmult
#define kcg_fmult(kcg_C1, kcg_C2) ((kcg_C1) * (kcg_C2))
#endif /* kcg_fmult */

#ifndef kcg_fminus
#define kcg_fminus(kcg_C1, kcg_C2) ((kcg_C1) - (kcg_C2))
#endif /* kcg_fminus */

#ifndef kcg_fplus
#define kcg_fplus(kcg_C1, kcg_C2) ((kcg_C1) + (kcg_C2))
#endif /* kcg_fplus */

#ifndef kcg_mod
#define kcg_mod(kcg_C1, kcg_C2) ((kcg_C1) % (kcg_C2))
#endif /* kcg_mod */

#ifndef kcg_idiv
#define kcg_idiv(kcg_C1, kcg_C2) ((kcg_C1) / (kcg_C2))
#endif /* kcg_idiv */

#ifndef kcg_imult
#define kcg_imult(kcg_C1, kcg_C2) ((kcg_C1) * (kcg_C2))
#endif /* kcg_imult */

#ifndef kcg_iminus
#define kcg_iminus(kcg_C1, kcg_C2) ((kcg_C1) - (kcg_C2))
#endif /* kcg_iminus */

#ifndef kcg_iplus
#define kcg_iplus(kcg_C1, kcg_C2) ((kcg_C1) + (kcg_C2))
#endif /* kcg_iplus */

#ifndef kcg_cdiff
#define kcg_cdiff(kcg_C1, kcg_C2) ((kcg_C1) != (kcg_C2))
#endif /* kcg_cdiff */

#ifndef kcg_diff
#define kcg_diff(kcg_C1, kcg_C2) ((kcg_C1) != (kcg_C2))
#endif /* kcg_diff */

#ifndef kcg_fdiff
#define kcg_fdiff(kcg_C1, kcg_C2) ((kcg_C1) != (kcg_C2))
#endif /* kcg_fdiff */

#ifndef kcg_idiff
#define kcg_idiff(kcg_C1, kcg_C2) ((kcg_C1) != (kcg_C2))
#endif /* kcg_idiff */

#ifndef kcg_bdiff
#define kcg_bdiff(kcg_C1, kcg_C2) ((kcg_C1) != (kcg_C2))
#endif /* kcg_bdiff */

#ifndef kcg_ceq
#define kcg_ceq(kcg_C1, kcg_C2) ((kcg_C1) == (kcg_C2))
#endif /* kcg_ceq */

#ifndef kcg_eq
#define kcg_eq(kcg_C1, kcg_C2) ((kcg_C1) == (kcg_C2))
#endif /* kcg_eq */

#ifndef kcg_feq
#define kcg_feq(kcg_C1, kcg_C2) ((kcg_C1) == (kcg_C2))
#endif /* kcg_feq */

#ifndef kcg_ieq
#define kcg_ieq(kcg_C1, kcg_C2) ((kcg_C1) == (kcg_C2))
#endif /* kcg_ieq */

#ifndef kcg_beq
#define kcg_beq(kcg_C1, kcg_C2) ((kcg_C1) == (kcg_C2))
#endif /* kcg_beq */

#ifndef kcg_ufminus
#define kcg_ufminus(kcg_C1) (- (kcg_C1))
#endif /* kcg_ufminus */

#ifndef kcg_uminus
#define kcg_uminus(kcg_C1) (- (kcg_C1))
#endif /* kcg_uminus */

#ifndef kcg_incr
#define kcg_incr(kcg_C1) ((kcg_C1)++)
#endif /* kcg_incr */

#ifndef kcg_index
#define kcg_index(kcg_C1, kcg_C2) ((kcg_C1)[(kcg_C2)])
#endif /* kcg_index */

#ifndef kcg_cond
#define kcg_cond(kcg_C1) (kcg_C1)
#endif /* kcg_cond */

#ifndef kcg_not
#define kcg_not(kcg_C1) (kcg_true ^ (kcg_C1))
#endif /* kcg_not */

#ifndef kcg_xor
#define kcg_xor(kcg_C1, kcg_C2) ((kcg_C1) ^ (kcg_C2))
#endif /* kcg_xor */

#ifndef kcg_ifdiv
#define kcg_ifdiv(kcg_C1, kcg_C2) ((kcg_int) ((kcg_C1) / (kcg_C2)))
#endif /* kcg_ifdiv */

#ifndef kcg_fidiv
#define kcg_fidiv(kcg_C1, kcg_C2) ((kcg_real) (kcg_C1) / (kcg_real) (kcg_C2))
#endif /* kcg_fidiv */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

#endif /* _KCG_TYPES_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** kcg_types.h
** Generation date: 2016-08-24T07:26:15
*************************************************************$ */

