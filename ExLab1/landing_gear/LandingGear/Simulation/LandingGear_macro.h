#ifndef _LANDINGGEAR_MACRO_H_
#define _LANDINGGEAR_MACRO_H_


/*$************** SCADE Macro wrapper *********************
** Begin of file LandingGear_macro.h
***********************************************************$*/


/*$**********************************************************
*                        INCLUDES
***********************************************************$*/

/* includes */
#include "LandingGear.h"

/*$**********************************************************
*                           CONTEXT
***********************************************************$*/

typedef struct {
    inC_LandingGear inputs_ctx;
    outC_LandingGear outputs_ctx;
} WU_LandingGear;
#define WU_CTX_TYPE_LandingGear WU_LandingGear
#define WU_CTX_TYPE_LandingGear_SIZE sizeof(WU_LandingGear)

/*$**********************************************************
*                           SENSORS
***********************************************************$*/

#define DECLARE_SENSORS_LandingGear() 

#define DECLARE_EXT_SENSORS_LandingGear(MODE) 

/*$**********************************************************
*                           INPUTS
***********************************************************$*/

#define VARC_LandingGear_LG_UpBtn(context) context.inputs_ctx.LG_UpBtn  /* LandingGear/LG_UpBtn */
#define VAR_LandingGear_LG_UpBtn VARC_LandingGear_LG_UpBtn(CTX_LandingGear)

#define VARC_LandingGear_LG_FailBtn(context) context.inputs_ctx.LG_FailBtn  /* LandingGear/LG_FailBtn */
#define VAR_LandingGear_LG_FailBtn VARC_LandingGear_LG_FailBtn(CTX_LandingGear)


/*$**********************************************************
*                           OUTPUTS
***********************************************************$*/

#define VARC_LandingGear_LG_UpBtnTextString(context) context.outputs_ctx.LG_UpBtnTextString  /* LandingGear/LG_UpBtnTextString */
#define VAR_LandingGear_LG_UpBtnTextString VARC_LandingGear_LG_UpBtnTextString(CTX_LandingGear)

#define VARC_LandingGear_LG_FailBtnTextString(context) context.outputs_ctx.LG_FailBtnTextString  /* LandingGear/LG_FailBtnTextString */
#define VAR_LandingGear_LG_FailBtnTextString VARC_LandingGear_LG_FailBtnTextString(CTX_LandingGear)

#define VARC_LandingGear_Layer1Active(context) context.outputs_ctx.Layer1Active  /* LandingGear/Layer1Active */
#define VAR_LandingGear_Layer1Active VARC_LandingGear_Layer1Active(CTX_LandingGear)

#define VARC_LandingGear_Layer1Visible(context) context.outputs_ctx.Layer1Visible  /* LandingGear/Layer1Visible */
#define VAR_LandingGear_Layer1Visible VARC_LandingGear_Layer1Visible(CTX_LandingGear)

#define VARC_LandingGear_NoseSquareBorderColor(context) context.outputs_ctx.NoseSquareBorderColor  /* LandingGear/NoseSquareBorderColor */
#define VAR_LandingGear_NoseSquareBorderColor VARC_LandingGear_NoseSquareBorderColor(CTX_LandingGear)

#define VARC_LandingGear_LeftSquareBorderColor(context) context.outputs_ctx.LeftSquareBorderColor  /* LandingGear/LeftSquareBorderColor */
#define VAR_LandingGear_LeftSquareBorderColor VARC_LandingGear_LeftSquareBorderColor(CTX_LandingGear)

#define VARC_LandingGear_RightSquareBorderColor(context) context.outputs_ctx.RightSquareBorderColor  /* LandingGear/RightSquareBorderColor */
#define VAR_LandingGear_RightSquareBorderColor VARC_LandingGear_RightSquareBorderColor(CTX_LandingGear)

#define VARC_LandingGear_NoseSquareFillColor(context) context.outputs_ctx.NoseSquareFillColor  /* LandingGear/NoseSquareFillColor */
#define VAR_LandingGear_NoseSquareFillColor VARC_LandingGear_NoseSquareFillColor(CTX_LandingGear)

#define VARC_LandingGear_LeftSquareFillColor(context) context.outputs_ctx.LeftSquareFillColor  /* LandingGear/LeftSquareFillColor */
#define VAR_LandingGear_LeftSquareFillColor VARC_LandingGear_LeftSquareFillColor(CTX_LandingGear)

#define VARC_LandingGear_RightSquareFillColor(context) context.outputs_ctx.RightSquareFillColor  /* LandingGear/RightSquareFillColor */
#define VAR_LandingGear_RightSquareFillColor VARC_LandingGear_RightSquareFillColor(CTX_LandingGear)

#define VARC_LandingGear_NoseTextColorIndex(context) context.outputs_ctx.NoseTextColorIndex  /* LandingGear/NoseTextColorIndex */
#define VAR_LandingGear_NoseTextColorIndex VARC_LandingGear_NoseTextColorIndex(CTX_LandingGear)

#define VARC_LandingGear_LeftTextColorIndex(context) context.outputs_ctx.LeftTextColorIndex  /* LandingGear/LeftTextColorIndex */
#define VAR_LandingGear_LeftTextColorIndex VARC_LandingGear_LeftTextColorIndex(CTX_LandingGear)

#define VARC_LandingGear_RightTextColorIndex(context) context.outputs_ctx.RightTextColorIndex  /* LandingGear/RightTextColorIndex */
#define VAR_LandingGear_RightTextColorIndex VARC_LandingGear_RightTextColorIndex(CTX_LandingGear)

#define VARC_LandingGear_NoseTextString(context) context.outputs_ctx.NoseTextString  /* LandingGear/NoseTextString */
#define VAR_LandingGear_NoseTextString VARC_LandingGear_NoseTextString(CTX_LandingGear)

#define VARC_LandingGear_LeftTextString(context) context.outputs_ctx.LeftTextString  /* LandingGear/LeftTextString */
#define VAR_LandingGear_LeftTextString VARC_LandingGear_LeftTextString(CTX_LandingGear)

#define VARC_LandingGear_RightTextString(context) context.outputs_ctx.RightTextString  /* LandingGear/RightTextString */
#define VAR_LandingGear_RightTextString VARC_LandingGear_RightTextString(CTX_LandingGear)

#define VARC_LandingGear_StringSize(context) context.outputs_ctx.StringSize  /* LandingGear/StringSize */
#define VAR_LandingGear_StringSize VARC_LandingGear_StringSize(CTX_LandingGear)

#define VARC_LandingGear_Emit2CDS(context) context.outputs_ctx.Emit2CDS  /* LandingGear/Emit2CDS */
#define VAR_LandingGear_Emit2CDS VARC_LandingGear_Emit2CDS(CTX_LandingGear)


/*$**********************************************************
*                           ELEMENT ACCESS
***********************************************************$*/

#define GET_ELEMENT_AT(VARIABLE, INDEX)  (VARIABLE)[INDEX]
#define GET_STRUCTURE_FIELD(VARIABLE, FIELD) (VARIABLE).FIELD

/*$**********************************************************
*                        VARIABLES TYPES
***********************************************************$*/

#define T_LG_UpBtn kcg_bool
#define CPY_LG_UpBtn(DST, SRC) DST = SRC
#define T_LG_FailBtn kcg_bool
#define CPY_LG_FailBtn(DST, SRC) DST = SRC
#define T_LG_UpBtnTextString T_String
#define CPY_LG_UpBtnTextString(DST, SRC) kcg_copy_T_String(DST, SRC)
#define T_LG_FailBtnTextString T_String
#define CPY_LG_FailBtnTextString(DST, SRC) kcg_copy_T_String(DST, SRC)
#define T_Layer1Active kcg_bool
#define CPY_Layer1Active(DST, SRC) DST = SRC
#define T_Layer1Visible kcg_bool
#define CPY_Layer1Visible(DST, SRC) DST = SRC
#define T_NoseSquareBorderColor kcg_uint8
#define CPY_NoseSquareBorderColor(DST, SRC) DST = SRC
#define T_LeftSquareBorderColor kcg_uint8
#define CPY_LeftSquareBorderColor(DST, SRC) DST = SRC
#define T_RightSquareBorderColor kcg_uint8
#define CPY_RightSquareBorderColor(DST, SRC) DST = SRC
#define T_NoseSquareFillColor kcg_uint8
#define CPY_NoseSquareFillColor(DST, SRC) DST = SRC
#define T_LeftSquareFillColor kcg_uint8
#define CPY_LeftSquareFillColor(DST, SRC) DST = SRC
#define T_RightSquareFillColor kcg_uint8
#define CPY_RightSquareFillColor(DST, SRC) DST = SRC
#define T_NoseTextColorIndex kcg_uint8
#define CPY_NoseTextColorIndex(DST, SRC) DST = SRC
#define T_LeftTextColorIndex kcg_uint8
#define CPY_LeftTextColorIndex(DST, SRC) DST = SRC
#define T_RightTextColorIndex kcg_uint8
#define CPY_RightTextColorIndex(DST, SRC) DST = SRC
#define T_NoseTextString T_String
#define CPY_NoseTextString(DST, SRC) kcg_copy_T_String(DST, SRC)
#define T_LeftTextString T_String
#define CPY_LeftTextString(DST, SRC) kcg_copy_T_String(DST, SRC)
#define T_RightTextString T_String
#define CPY_RightTextString(DST, SRC) kcg_copy_T_String(DST, SRC)
#define T_StringSize kcg_uint16
#define CPY_StringSize(DST, SRC) DST = SRC
#define T_Emit2CDS kcg_bool
#define CPY_Emit2CDS(DST, SRC) DST = SRC


/*$**********************************************************
*                      CREATION, INIT AND PERFORM
***********************************************************$*/

#define DECLAREC_CTXT_LandingGear(context)  WU_LandingGear context;

#define DECLARE_CTXT_LandingGear() DECLAREC_CTXT_LandingGear(CTX_LandingGear)

#define DECLAREC_EXT_CTXT_LandingGear(MODE , context) MODE WU_LandingGear context;

#define DECLARE_EXT_CTXT_LandingGear(MODE) DECLAREC_EXT_CTXT_LandingGear(MODE , CTX_LandingGear)

#ifndef KCG_USER_DEFINED_INIT
#   define INITC_LandingGear(context) LandingGear_init(&context.outputs_ctx);
#else
#   ifndef KCG_NO_EXTERN_CALL_TO_RESET
#       define INITC_LandingGear(context) LandingGear_reset(&context.outputs_ctx);
#   else
#       define INITC_LandingGear(context) 
#   endif
#endif
#define INIT_LandingGear() INITC_LandingGear(CTX_LandingGear)

#define PERFORMC_LandingGear(context) LandingGear( \
    &context.inputs_ctx /* input context */,\
    &context.outputs_ctx /* output/memories context */\
)
#define PERFORM_LandingGear() PERFORMC_LandingGear(CTX_LandingGear)

/*$************** SCADE Macro wrapper *********************
** End of file LandingGear_macro.h
***********************************************************$*/

#endif /* _LANDINGGEAR_MACRO_H_ */
