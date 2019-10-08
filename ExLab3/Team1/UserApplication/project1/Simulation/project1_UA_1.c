/*********************************************************
 **
 ** File  project1_UA_1.c
 **
 ** Automatically generated by SCADE Suite UA Adaptor
 ** Version 2019 R2a (build 20190702)
 ** 
 ** Date of generation: 2019-10-07T16:33:47
 ** Command line: C:/Program Files/ANSYS Inc/v194/SCADE/SCADE/bin/uaadaptor.exe -sdy C:\Repositorio_ITA\SCADE\ExLab3\Team1\UserApplication\project1\project1.sdy -n C:\Program Files\ANSYS Inc\v194\SCADE\SCADE Display\config\a661_description\a661.xml -outdir C:/Repositorio_ITA/SCADE/ExLab3/Team1/UserApplication/project1/Simulation -k C:/Repositorio_ITA/SCADE/ExLab3/Team1/UserApplication/project1/Simulation/kcg_trace.xml -o project1_UA_1 -i project1_interface.h -encoding UTF-8 C:\Repositorio_ITA\SCADE\ExLab3\Team1\DefinitionFile\project1.sgfx
 *********************************************************/
#include "kcg_sensors.h"
#include "project1_UA_1.h"
#include "project1_UA_1_constants.h"
#include "project1_UA_1_private.h"

/********************************************************************************************
 * Send messages to the A661 server                                                         *
 ********************************************************************************************/
 uaa_size project1_UA_1_send(buffer_el msg[], 
  outC_project1* scade_ctx,  extern_out_ctx_t * extern_ctx){
  uaa_size offset = 0;
  
  offset = offset + a661_com_layer_1(msg + offset, scade_ctx, extern_ctx);
  return offset ;
}

/********************************************************************************************
 * Receive notifications from the A661 server                                               *
 ********************************************************************************************/
uaa_size project1_UA_1_receive(buffer_el buffer[],  uaa_size buffer_size, 
  inC_project1* scade_ctx,  extern_in_ctx_t * extern_ctx){
  uaa_size widget_event_structure_current_size = 0;
  uaa_size A661_Run_Time_Command_limit = 0;
  uaa_size root_current_size = 0;
  uaa_size n = 0;
  uaa_size next_n = 0;
  /*  type root */
  switch (buffer[ n ]){
    case A661_BEGIN_BLOCK : 
      root_current_size = READ_ULONG(( buffer + ( 4 + n ) ));
      next_n = ( ( n + root_current_size ) - 4 );
      /*  LayerIdent */
      switch (buffer[ ( 1 + n ) ]){
        case 1 : 
          /*  root */
          n = ( 8 + n );
          A661_Run_Time_Command_limit = ( ( n + root_current_size ) - 12 );
          while(( n < A661_Run_Time_Command_limit )){
            /*  type A661_Run_Time_Command */
            switch (READ_USHORT(( buffer + n ))){
              case A661_NOTIFY_WIDGET_EVENT : 
                widget_event_structure_current_size = READ_USHORT(( buffer + ( 2 + n ) ));
                next_n = ( n + widget_event_structure_current_size );
                /*  WidgetIdent */
                switch (READ_USHORT(( buffer + ( 4 + n ) ))){
                  case 1 : 
                    /*  widget_event_structure */
                    n = ( 6 + n );
                    /*  type EventStructure */
                    switch (READ_USHORT(( buffer + ( 2 + n ) ))){
                      case A661_EVT_SELECTION : 
                        /*  PushButton_A661_EVT_SELECTION */
                        /*  Notify */
                        scade_ctx->SignalFromButton = kcg_true;
                        break;
                      default : break;
                    }
                    n = next_n;
                    break;
                  default : break;
                }
                break;
              default : 
                next_n = ( n + READ_USHORT(( buffer + ( 2 + n ) )) );
                n = next_n;
                break;
            }
            n = next_n;
          }
          n = ( 4 + n );
          break;
        default : break;
      }
      break;
    default : break;
  }
  return n ;
}

/********************************************************************************************
 * Clear notifications                                                                      *
 ********************************************************************************************/
void project1_UA_1_receive_clear(inC_project1* scade_ctx, 
  extern_in_ctx_t * extern_ctx){
  scade_ctx->SignalFromButton = kcg_false;
}

/*********************************************************
 ** End of file
 ** End of generation: 2019-10-07T16:33:47
 *********************************************************/

