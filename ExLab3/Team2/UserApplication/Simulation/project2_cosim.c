
/* Code generated for Graphical Panels Co-simulation */

#include "project2_UA_2.h"
#include "project2_interface.h"
#include "A661Cosim.h"



void AfterSimInit(void){
	A661SetServerPath("C:/Program Files/Esterel Technologies/SCADE R17/SCADE/bin/../../SCADE A661/bin/A661Server.exe");
	#ifdef A661_LOGFILE
	A661SetLogFile(A661_LOGFILE);
	#endif
	if (0/*OK*/ != A661ConnectServer("127.0.0.1", 1231, " \"C:/Listex_2/Team2/UserApplication/Simulation/project2_UA_2.bin\"", "C:/Listex_2/Team2/UserApplication/Simulation/project2_UA_2_conf.xml" )) {
		const char *pszError;
		A661GetLastError(&pszError);
		SsmOutputMessage(SIM_WARNING, pszError);
	}
}


void BeforeSimStep(void){
	buffer_el msg[project2_UA_2_MAX_SIZE_INPUT_BUFFER];
	/* reveive from server */
	project2_UA_2_receive_clear(&inputs_ctx, NULL);
	if (A661Receive(msg, sizeof msg) == 0)
		project2_UA_2_receive(msg, sizeof msg, &inputs_ctx, NULL);
}


void AfterSimStep(void){
	static buffer_el msg[project2_UA_2_MAX_SIZE_OUTPUT_BUFFER];
	int len;
	len = project2_UA_2_send(msg, &outputs_ctx, NULL);
	/* Send to server */
	A661Send(msg, len);
}


void RefreshSimValues(void){
	 if (GraphicalInputsConnected) {
		BeforeSimStep();
		UpdateSimulatorValues();
	}
}


void BeforeSimInit(void){
}


void ExtendedSimStop(void){
	A661KillServer();
}


int ExtendedGetDumpSize(){
	return 0;
}


void ExtendedGatherDumpData(char * pData){
}


void ExtendedRestoreDumpData(const char * pData){
	AfterSimStep();
}


void UpdateValues(void){
}

