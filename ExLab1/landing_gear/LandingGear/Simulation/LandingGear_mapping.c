/* LandingGear_mapping.c */

#include "LandingGear_type.h"
#include "LandingGear_interface.h"
#include "LandingGear_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name

DECL_ITER(array_5);

#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_24, 4);
DECL_SCOPE(scope_23, 4);
DECL_SCOPE(scope_22, 3);
DECL_SCOPE(scope_21, 1);
DECL_SCOPE(scope_20, 3);
DECL_SCOPE(scope_19, 4);
DECL_SCOPE(scope_18, 4);
DECL_SCOPE(scope_17, 3);
DECL_SCOPE(scope_16, 2);
DECL_SCOPE(scope_15, 1);
DECL_SCOPE(scope_14, 3);
DECL_SCOPE(scope_13, 1);
DECL_SCOPE(scope_12, 1);
DECL_SCOPE(scope_11, 10);
DECL_SCOPE(scope_10, 4);
DECL_SCOPE(scope_9, 4);
DECL_SCOPE(scope_8, 3);
DECL_SCOPE(scope_7, 1);
DECL_SCOPE(scope_6, 3);
DECL_SCOPE(scope_5, 10);
DECL_SCOPE(scope_4, 5);
DECL_SCOPE(scope_3, 5);
DECL_SCOPE(scope_2, 1);
DECL_SCOPE(scope_1, 41);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_SM1_SSM_st_DOWN_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_DOWN_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_TRANSITION_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_TRANSITION_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_UP_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_UP_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_DOWN_TRANSITION_1_DOWN_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_DOWN_TRANSITION_1_DOWN_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_TRANSITION_DOWN_2_TRANSITION_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_TRANSITION_DOWN_2_TRANSITION_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_TRANSITION_UP_1_TRANSITION_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_TRANSITION_UP_1_TRANSITION_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_UP_TRANSITION_1_UP_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_UP_TRANSITION_1_UP_SM1; }
static int isActive_kcg_bool_kcg_false(void* pHandle) { return *(kcg_bool*)pHandle == kcg_false; }
static int isActive_kcg_bool_kcg_true(void* pHandle) { return *(kcg_bool*)pHandle == kcg_true; }

/* mapping definition */

const MappingIterator iter_array_5 = { "array", 5, 5, NULL };

const MappingEntry scope_24_entries[4] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(T_String), (size_t)&outputs_ctx._L1_then_IfBlock2_UP_SM1, &_Type_T_String_Utils, &scope_22_entries[0], isActive_kcg_bool_kcg_true, &scope_2, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L2_then_IfBlock2_UP_SM1, &_Type_kcg_uint8_Utils, &scope_22_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L3_then_IfBlock2_UP_SM1, &_Type_kcg_uint8_Utils, &scope_22_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L4_then_IfBlock2_UP_SM1, &_Type_kcg_uint8_Utils, &scope_22_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 }
};
const MappingScope scope_24 = {
    "LandingGear/ LandingGearSM1:UP:IfBlock2:then:",
    scope_24_entries, 4
};

const MappingEntry scope_23_entries[4] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(T_String), (size_t)&outputs_ctx._L1_else_IfBlock2_UP_SM1, &_Type_T_String_Utils, &scope_22_entries[0], isActive_kcg_bool_kcg_false, &scope_2, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L2_else_IfBlock2_UP_SM1, &_Type_kcg_uint8_Utils, &scope_22_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L3_else_IfBlock2_UP_SM1, &_Type_kcg_uint8_Utils, &scope_22_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L4_else_IfBlock2_UP_SM1, &_Type_kcg_uint8_Utils, &scope_22_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 3 }
};
const MappingScope scope_23 = {
    "LandingGear/ LandingGearSM1:UP:IfBlock2:else:",
    scope_23_entries, 4
};

const MappingEntry scope_22_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.IfBlock2_clock_UP_SM1, &_Type_kcg_bool_Utils, &scope_5_entries[0], isActive_SSM_ST_SM1_SSM_st_UP_SM1, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_22_entries[0], isActive_kcg_bool_kcg_false, &scope_23, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_22_entries[0], isActive_kcg_bool_kcg_true, &scope_24, 1, 2 }
};
const MappingScope scope_22 = {
    "LandingGear/ LandingGearSM1:UP:IfBlock2:",
    scope_22_entries, 3
};

const MappingEntry scope_21_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_5_entries[5], isActive_SSM_TR_SM1_SSM_TR_UP_TRANSITION_1_UP_SM1, NULL, 1, 0 }
};
const MappingScope scope_21 = {
    "LandingGear/ LandingGearSM1:UP:<1",
    scope_21_entries, 1
};

const MappingEntry scope_20_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_5_entries[5], isActive_SSM_TR_SM1_SSM_TR_UP_TRANSITION_1_UP_SM1, &scope_21, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_UP_SM1, &_Type_kcg_bool_Utils, &scope_5_entries[0], isActive_SSM_ST_SM1_SSM_st_UP_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_IF, "IfBlock2:", NULL, 0, 0, NULL, NULL, NULL, &scope_22, 1, 2 }
};
const MappingScope scope_20 = {
    "LandingGear/ LandingGearSM1:UP:",
    scope_20_entries, 3
};

const MappingEntry scope_19_entries[4] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(T_String), (size_t)&outputs_ctx._L1_then_IfBlock2_TRANSITION_SM1, &_Type_T_String_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_true, &scope_2, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L2_then_IfBlock2_TRANSITION_SM1, &_Type_kcg_uint8_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L3_then_IfBlock2_TRANSITION_SM1, &_Type_kcg_uint8_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L4_then_IfBlock2_TRANSITION_SM1, &_Type_kcg_uint8_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 }
};
const MappingScope scope_19 = {
    "LandingGear/ LandingGearSM1:TRANSITION:IfBlock2:then:",
    scope_19_entries, 4
};

const MappingEntry scope_18_entries[4] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(T_String), (size_t)&outputs_ctx._L1_else_IfBlock2_TRANSITION_SM1, &_Type_T_String_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_false, &scope_2, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L2_else_IfBlock2_TRANSITION_SM1, &_Type_kcg_uint8_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L3_else_IfBlock2_TRANSITION_SM1, &_Type_kcg_uint8_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L4_else_IfBlock2_TRANSITION_SM1, &_Type_kcg_uint8_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 3 }
};
const MappingScope scope_18 = {
    "LandingGear/ LandingGearSM1:TRANSITION:IfBlock2:else:",
    scope_18_entries, 4
};

const MappingEntry scope_17_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.IfBlock2_clock_TRANSITION_SM1, &_Type_kcg_bool_Utils, &scope_5_entries[0], isActive_SSM_ST_SM1_SSM_st_TRANSITION_SM1, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_17_entries[0], isActive_kcg_bool_kcg_false, &scope_18, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_17_entries[0], isActive_kcg_bool_kcg_true, &scope_19, 1, 2 }
};
const MappingScope scope_17 = {
    "LandingGear/ LandingGearSM1:TRANSITION:IfBlock2:",
    scope_17_entries, 3
};

const MappingEntry scope_16_entries[2] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_then_IfBlock1_TRANSITION_SM1, &_Type_kcg_bool_Utils, &scope_14_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_then_IfBlock1_TRANSITION_SM1, &_Type_kcg_bool_Utils, &scope_14_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 }
};
const MappingScope scope_16 = {
    "LandingGear/ LandingGearSM1:TRANSITION:IfBlock1:then:",
    scope_16_entries, 2
};

const MappingEntry scope_15_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_else_IfBlock1_TRANSITION_SM1, &_Type_kcg_bool_Utils, &scope_14_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 }
};
const MappingScope scope_15 = {
    "LandingGear/ LandingGearSM1:TRANSITION:IfBlock1:else:",
    scope_15_entries, 1
};

const MappingEntry scope_14_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.IfBlock1_clock_TRANSITION_SM1, &_Type_kcg_bool_Utils, &scope_5_entries[0], isActive_SSM_ST_SM1_SSM_st_TRANSITION_SM1, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_kcg_bool_kcg_false, &scope_15, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_kcg_bool_kcg_true, &scope_16, 1, 2 }
};
const MappingScope scope_14 = {
    "LandingGear/ LandingGearSM1:TRANSITION:IfBlock1:",
    scope_14_entries, 3
};

const MappingEntry scope_13_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_5_entries[6], isActive_SSM_TR_SM1_SSM_TR_TRANSITION_DOWN_2_TRANSITION_SM1, NULL, 1, 0 }
};
const MappingScope scope_13 = {
    "LandingGear/ LandingGearSM1:TRANSITION:<2",
    scope_13_entries, 1
};

const MappingEntry scope_12_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_5_entries[6], isActive_SSM_TR_SM1_SSM_TR_TRANSITION_UP_1_TRANSITION_SM1, NULL, 1, 0 }
};
const MappingScope scope_12 = {
    "LandingGear/ LandingGearSM1:TRANSITION:<1",
    scope_12_entries, 1
};

const MappingEntry scope_11_entries[10] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_5_entries[6], isActive_SSM_TR_SM1_SSM_TR_TRANSITION_UP_1_TRANSITION_SM1, &scope_12, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_5_entries[6], isActive_SSM_TR_SM1_SSM_TR_TRANSITION_DOWN_2_TRANSITION_SM1, &scope_13, 1, 1 },
    /* 2 */ { MAP_LOCAL, "ResetDelay", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.ResetDelay_TRANSITION_SM1, &_Type_kcg_bool_Utils, &scope_5_entries[0], isActive_SSM_ST_SM1_SSM_st_TRANSITION_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L1_TRANSITION_SM1, &_Type_kcg_int32_Utils, &scope_5_entries[0], isActive_SSM_ST_SM1_SSM_st_TRANSITION_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L2_TRANSITION_SM1, &_Type_kcg_int32_Utils, &scope_5_entries[0], isActive_SSM_ST_SM1_SSM_st_TRANSITION_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_TRANSITION_SM1, &_Type_kcg_bool_Utils, &scope_5_entries[0], isActive_SSM_ST_SM1_SSM_st_TRANSITION_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L4_TRANSITION_SM1, &_Type_kcg_int32_Utils, &scope_5_entries[0], isActive_SSM_ST_SM1_SSM_st_TRANSITION_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L5_TRANSITION_SM1, &_Type_kcg_int32_Utils, &scope_5_entries[0], isActive_SSM_ST_SM1_SSM_st_TRANSITION_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_14, 1, 8 },
    /* 9 */ { MAP_IF, "IfBlock2:", NULL, 0, 0, NULL, NULL, NULL, &scope_17, 1, 9 }
};
const MappingScope scope_11 = {
    "LandingGear/ LandingGearSM1:TRANSITION:",
    scope_11_entries, 10
};

const MappingEntry scope_10_entries[4] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(T_String), (size_t)&outputs_ctx._L1_then_IfBlock2_DOWN_SM1, &_Type_T_String_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_true, &scope_2, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L2_then_IfBlock2_DOWN_SM1, &_Type_kcg_uint8_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L3_then_IfBlock2_DOWN_SM1, &_Type_kcg_uint8_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L4_then_IfBlock2_DOWN_SM1, &_Type_kcg_uint8_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 }
};
const MappingScope scope_10 = {
    "LandingGear/ LandingGearSM1:DOWN:IfBlock2:then:",
    scope_10_entries, 4
};

const MappingEntry scope_9_entries[4] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(T_String), (size_t)&outputs_ctx._L1_else_IfBlock2_DOWN_SM1, &_Type_T_String_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_false, &scope_2, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L2_else_IfBlock2_DOWN_SM1, &_Type_kcg_uint8_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L3_else_IfBlock2_DOWN_SM1, &_Type_kcg_uint8_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L4_else_IfBlock2_DOWN_SM1, &_Type_kcg_uint8_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 3 }
};
const MappingScope scope_9 = {
    "LandingGear/ LandingGearSM1:DOWN:IfBlock2:else:",
    scope_9_entries, 4
};

const MappingEntry scope_8_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.IfBlock2_clock_DOWN_SM1, &_Type_kcg_bool_Utils, &scope_5_entries[0], isActive_SSM_ST_SM1_SSM_st_DOWN_SM1, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_8_entries[0], isActive_kcg_bool_kcg_false, &scope_9, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_8_entries[0], isActive_kcg_bool_kcg_true, &scope_10, 1, 2 }
};
const MappingScope scope_8 = {
    "LandingGear/ LandingGearSM1:DOWN:IfBlock2:",
    scope_8_entries, 3
};

const MappingEntry scope_7_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_5_entries[5], isActive_SSM_TR_SM1_SSM_TR_DOWN_TRANSITION_1_DOWN_SM1, NULL, 1, 0 }
};
const MappingScope scope_7 = {
    "LandingGear/ LandingGearSM1:DOWN:<1",
    scope_7_entries, 1
};

const MappingEntry scope_6_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_5_entries[5], isActive_SSM_TR_SM1_SSM_TR_DOWN_TRANSITION_1_DOWN_SM1, &scope_7, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_DOWN_SM1, &_Type_kcg_bool_Utils, &scope_5_entries[0], isActive_SSM_ST_SM1_SSM_st_DOWN_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_IF, "IfBlock2:", NULL, 0, 0, NULL, NULL, NULL, &scope_8, 1, 2 }
};
const MappingScope scope_6 = {
    "LandingGear/ LandingGearSM1:DOWN:",
    scope_6_entries, 3
};

const MappingEntry scope_5_entries[10] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_act, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_nxt, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_sel, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired_strong, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "DOWN:", NULL, 0, 0, NULL, &scope_5_entries[0], isActive_SSM_ST_SM1_SSM_st_DOWN_SM1, &scope_6, 1, 7 },
    /* 8 */ { MAP_STATE, "TRANSITION:", NULL, 0, 0, NULL, &scope_5_entries[0], isActive_SSM_ST_SM1_SSM_st_TRANSITION_SM1, &scope_11, 1, 8 },
    /* 9 */ { MAP_STATE, "UP:", NULL, 0, 0, NULL, &scope_5_entries[0], isActive_SSM_ST_SM1_SSM_st_UP_SM1, &scope_20, 1, 9 }
};
const MappingScope scope_5 = {
    "LandingGear/ LandingGearSM1:",
    scope_5_entries, 10
};

const MappingEntry scope_4_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Output1_Switch_2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_Switch_2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_Switch_2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_Switch_2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4_Switch_2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_4 = {
    "LandingGear/ LandingGear/Switch 2",
    scope_4_entries, 5
};

const MappingEntry scope_3_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Output1_Switch_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_Switch_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_Switch_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_Switch_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4_Switch_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_3 = {
    "LandingGear/ LandingGear/Switch 1",
    scope_3_entries, 5
};

const MappingEntry scope_2_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_2 = {
    "T_String",
    scope_2_entries, 1
};

const MappingEntry scope_1_entries[41] = {
    /* 0 */ { MAP_OUTPUT, "LG_UpBtnTextString", NULL, sizeof(T_String), (size_t)&outputs_ctx.LG_UpBtnTextString, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "LG_FailBtnTextString", NULL, sizeof(T_String), (size_t)&outputs_ctx.LG_FailBtnTextString, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "Layer1Active", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Layer1Active, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "Layer1Visible", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Layer1Visible, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "NoseSquareBorderColor", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx.NoseSquareBorderColor, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_OUTPUT, "LeftSquareBorderColor", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx.LeftSquareBorderColor, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_OUTPUT, "RightSquareBorderColor", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx.RightSquareBorderColor, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_OUTPUT, "NoseSquareFillColor", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx.NoseSquareFillColor, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_OUTPUT, "LeftSquareFillColor", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx.LeftSquareFillColor, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_OUTPUT, "RightSquareFillColor", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx.RightSquareFillColor, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_OUTPUT, "NoseTextColorIndex", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx.NoseTextColorIndex, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_OUTPUT, "LeftTextColorIndex", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx.LeftTextColorIndex, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_OUTPUT, "RightTextColorIndex", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx.RightTextColorIndex, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_OUTPUT, "NoseTextString", NULL, sizeof(T_String), (size_t)&outputs_ctx.NoseTextString, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 13 },
    /* 14 */ { MAP_OUTPUT, "LeftTextString", NULL, sizeof(T_String), (size_t)&outputs_ctx.LeftTextString, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 14 },
    /* 15 */ { MAP_OUTPUT, "RightTextString", NULL, sizeof(T_String), (size_t)&outputs_ctx.RightTextString, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 15 },
    /* 16 */ { MAP_OUTPUT, "StringSize", NULL, sizeof(kcg_uint16), (size_t)&outputs_ctx.StringSize, &_Type_kcg_uint16_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_OUTPUT, "Emit2CDS", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Emit2CDS, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_INPUT, "LG_UpBtn", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.LG_UpBtn, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_INPUT, "LG_FailBtn", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.LG_FailBtn, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "LG_Up", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.LG_Up, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "LG_Fail", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.LG_Fail, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "Tr2Dn", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Tr2Dn, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "Tr2Up", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Tr2Up, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L2", NULL, sizeof(T_String), (size_t)&outputs_ctx._L2, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L3", NULL, sizeof(T_String), (size_t)&outputs_ctx._L3, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L4", NULL, sizeof(T_String), (size_t)&outputs_ctx._L4, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L5, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L6", NULL, sizeof(T_String), (size_t)&outputs_ctx._L6, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L7", NULL, sizeof(T_String), (size_t)&outputs_ctx._L7, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L8", NULL, sizeof(T_String), (size_t)&outputs_ctx._L8, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_uint16), (size_t)&outputs_ctx._L11, &_Type_kcg_uint16_Utils, NULL, NULL, NULL, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L14, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L15, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L16, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L19, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L22, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_EXPANDED, "Switch 1", NULL, 0, 0, NULL, NULL, NULL, &scope_3, 1, 38 },
    /* 39 */ { MAP_EXPANDED, "Switch 2", NULL, 0, 0, NULL, NULL, NULL, &scope_4, 1, 39 },
    /* 40 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_5, 1, 40 }
};
const MappingScope scope_1 = {
    "LandingGear/ LandingGear",
    scope_1_entries, 41
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "LandingGear", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
