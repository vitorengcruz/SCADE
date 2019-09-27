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

DECL_SCOPE(scope_2, 1);
DECL_SCOPE(scope_1, 20);
DECL_SCOPE(scope_0, 1);

/* clock definition */


/* mapping definition */

const MappingIterator iter_array_5 = { "array", 5, 5, NULL };

const MappingEntry scope_2_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_2 = {
    "T_String",
    scope_2_entries, 1
};

const MappingEntry scope_1_entries[20] = {
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
    /* 19 */ { MAP_INPUT, "LG_FailBtn", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.LG_FailBtn, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 }
};
const MappingScope scope_1 = {
    "LandingGear/ LandingGear",
    scope_1_entries, 20
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
