@cd "C:/Repositorio_ITA/SCADE/ExLab2/FuelManagement/Simulation"
@set OCAMLRUNPARAM=b
"C:/Program Files/ANSYS Inc/v194/SCADE/SCADE/bin/uaadaptor.exe" -sdy "C:\Repositorio_ITA\SCADE\ExLab2\FuelManagement\FuelManagement.sdy" -n "C:\Program Files\ANSYS Inc\v194\SCADE\SCADE Display\config\a661_description\a661.xml" -outdir "C:/Repositorio_ITA/SCADE/ExLab2/FuelManagement/Simulation" -k "C:/Repositorio_ITA/SCADE/ExLab2/FuelManagement/Simulation/kcg_trace.xml" -o "Main_UA_1" -i "FuelManagement_interface.h"  -encoding "UTF-8"  "C:\Repositorio_ITA\SCADE\ExLab2\Fuel_tank\FM.sgfx"
@IF ERRORLEVEL 1 GOTO failed
@move "Main_UA_1.log" "Main_UA_1_uaadaptor.log"
"C:\Program Files\ANSYS Inc\v194\SCADE\SCADE Display\bin\ScadeDisplayConsole.exe"   batch generate "C:\Repositorio_ITA\SCADE\ExLab2\Fuel_tank\Fuel_tank.etp" -conf "DF Generation" -sconf -outdir "C:/Repositorio_ITA/SCADE/ExLab2/FuelManagement/Simulation" -prefix "Main_UA_1"
@IF ERRORLEVEL 1 GOTO failed
@move "Main_UA_1.log" "Main_UA_1_dfgen.log"
@exit 0
:failed
@exit 1
