/* project1_mapping.c */

#include "project1_type.h"
#include "project1_interface.h"
#include "project1_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name


#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_2, 5);
DECL_SCOPE(scope_1, 17);
DECL_SCOPE(scope_0, 1);

/* clock definition */


/* mapping definition */


const MappingEntry scope_2_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "Output", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Output_Toggle_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_Toggle_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_Toggle_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_Toggle_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4_Toggle_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_2 = {
    "project1/ project1/Toggle 1",
    scope_2_entries, 5
};

const MappingEntry scope_1_entries[17] = {
    /* 0 */ { MAP_OUTPUT, "ReqLayerVisible", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.ReqLayerVisible, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "ReqLayerActive", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.ReqLayerActive, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "SignalToTeam2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SignalToTeam2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "EmitToCDS", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.EmitToCDS, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "SignalToLED", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx.SignalToLED, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_INPUT, "SignalFromButton", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.SignalFromButton, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_INPUT, "SignalFromTeam2", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.SignalFromTeam2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L5, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L6, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L7, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L8, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L9, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_EXPANDED, "Toggle 1", NULL, 0, 0, NULL, NULL, NULL, &scope_2, 1, 16 }
};
const MappingScope scope_1 = {
    "project1/ project1",
    scope_1_entries, 17
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "project1", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
