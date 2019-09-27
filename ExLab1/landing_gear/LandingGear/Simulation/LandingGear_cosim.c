
/* Code generated for Graphical Panels Co-simulation */

#include "LandingGear_UA_1.h"
#include "LandingGear_interface.h"
#include "A661Cosim.h"



void AfterSimInit(void){
	const char *pszBinListFiles[2];
	A661SetServerPath("C:/Program Files/ANSYS Inc/v194/SCADE/SCADE/bin/../../SCADE A661/bin/A661Server.exe");
	#ifdef A661_LOGFILE
	A661SetLogFile(A661_LOGFILE);
	#endif
	pszBinListFiles[0] = "C:/Repositorio_ITA/SCADE/ExLab1/landing_gear/LandingGear/Simulation/LandingGear_UA_1_binaries.txt";
	pszBinListFiles[1] = 0;
	if (0/*OK*/ != A661ConnectServer("127.0.0.1", 1231, pszBinListFiles, "C:/Repositorio_ITA/SCADE/ExLab1/landing_gear/LandingGear/Simulation/LandingGear_UA_1_conf.xml" )) {
		const char *pszError;
		A661GetLastError(&pszError);
		SsmOutputMessage(SIM_ERROR, pszError);
	}
}


void BeforeSimStep(void){
	static buffer_el msg[LandingGear_UA_1_MAX_SIZE_INPUT_BUFFER];
	/* reveive from server */
	LandingGear_UA_1_receive_clear(&inputs_ctx, NULL);
	if (A661Receive(msg, sizeof msg) == 0)
		LandingGear_UA_1_receive(msg, sizeof msg, &inputs_ctx, NULL);
}


void AfterSimStep(void){
	static buffer_el msg[LandingGear_UA_1_MAX_SIZE_OUTPUT_BUFFER];
	int len;
	len = LandingGear_UA_1_send(msg, &outputs_ctx, NULL);
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

