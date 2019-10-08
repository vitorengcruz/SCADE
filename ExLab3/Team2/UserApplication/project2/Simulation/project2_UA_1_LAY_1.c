/*********************************************************
 **
 ** File  project2_UA_1_LAY_1.c
 **
 ** Automatically generated by SCADE Suite UA Adaptor
 ** Version 2019 R2a (build 20190702)
 ** 
 ** Date of generation: 2019-10-07T16:38:51
 ** Command line: C:/Program Files/ANSYS Inc/v194/SCADE/SCADE/bin/uaadaptor.exe -sdy C:\Repositorio_ITA\SCADE\ExLab3\Team2\UserApplication\project2\project2.sdy -n C:\Program Files\ANSYS Inc\v194\SCADE\SCADE Display\config\a661_description\a661.xml -outdir C:/Repositorio_ITA/SCADE/ExLab3/Team2/UserApplication/project2/Simulation -k C:/Repositorio_ITA/SCADE/ExLab3/Team2/UserApplication/project2/Simulation/kcg_trace.xml -o project2_UA_1 -i project2_interface.h -encoding UTF-8 C:\Repositorio_ITA\SCADE\ExLab3\Team2\DefinitionFile\project2.sgfx
 *********************************************************/
#include "kcg_sensors.h"
#include "project2_UA_1.h"
#include "project2_UA_1_constants.h"
#include "project2_UA_1_private.h"

/* Perform UA Request for layer 1 */
A661_INTERNAL uaa_size a661_com_A661_CMD_UA_REQUEST_layer_1(buffer_el msg[], 
  outC_project2* scade_ctx,  extern_out_ctx_t * extern_ctx){
  uaa_size offset = 0;
  if (scade_ctx->ReqLayerVisible ||
  scade_ctx->ReqLayerActive){
    
    if (scade_ctx->ReqLayerVisible){
      offset = offset + a661_com_A661_CMD_UA_REQUEST_8(msg + offset,
        A661_REQ_LAYER_VISIBLE, 0);
    }
    if (scade_ctx->ReqLayerActive){
      offset = offset + a661_com_A661_CMD_UA_REQUEST_8(msg + offset,
        A661_REQ_LAYER_ACTIVE, 0);
    }
  }
  return offset ;
}

/* Pack messages for layer 1 */
 uaa_size a661_com_layer_1(buffer_el msg[], 
  outC_project2* scade_ctx,  extern_out_ctx_t* extern_ctx){
  uaa_size offset = 0;
  if (scade_ctx->EmitToCDS ||
  scade_ctx->ReqLayerActive ||
  scade_ctx->ReqLayerVisible){
    LAYER("a661_layer#1");
    offset = 8;
    a661_msg_cmd_header(msg, 1, project2_UA_1_DEFAULT_CONTEXT_NUMBER);
    if (scade_ctx->EmitToCDS){
      WIDGET("GpArcEllipse#2");
      offset = offset + a661_com_csp_widget_GpArcEllipse(msg + offset, 2,
        scade_ctx->EmitToCDS, scade_ctx->SignalToLED);
    }
    if (scade_ctx->ReqLayerActive ||
    scade_ctx->ReqLayerVisible){
      offset = offset + a661_com_A661_CMD_UA_REQUEST_layer_1(msg + offset,
        scade_ctx, extern_ctx);
    }
    WRITE_ULONG(msg + offset, A661_END_BLOCK);
    offset = offset + 4;
    WRITE_ULONG(msg + 4, offset);
  }
  return offset ;
}

/*********************************************************
 ** End of file
 ** End of generation: 2019-10-07T16:38:51
 *********************************************************/

