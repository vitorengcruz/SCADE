@cd "C:/Repositorio_ITA/SCADE/ExLab3/Team2/UserApplication/project2/Simulation"
@set OCAMLRUNPARAM=b
"C:/Program Files/ANSYS Inc/v194/SCADE/SCADE/bin/uaadaptor.exe" -sdy "C:\Repositorio_ITA\SCADE\ExLab3\Team2\UserApplication\project2\project2.sdy" -n "C:\Program Files\ANSYS Inc\v194\SCADE\SCADE Display\config\a661_description\a661.xml" -outdir "C:/Repositorio_ITA/SCADE/ExLab3/Team2/UserApplication/project2/Simulation" -k "C:/Repositorio_ITA/SCADE/ExLab3/Team2/UserApplication/project2/Simulation/kcg_trace.xml" -o "project2_UA_1" -i "project2_interface.h"  -encoding "UTF-8"  "C:\Repositorio_ITA\SCADE\ExLab3\Team2\DefinitionFile\project2.sgfx"
@IF ERRORLEVEL 1 GOTO failed
@move "project2_UA_1.log" "project2_UA_1_uaadaptor.log"
"C:\Program Files\ANSYS Inc\v194\SCADE\SCADE Display\bin\ScadeDisplayConsole.exe"   batch generate "C:\Repositorio_ITA\SCADE\ExLab3\Team2\DefinitionFile\project2.etp" -conf "DF Generation" -sconf -outdir "C:/Repositorio_ITA/SCADE/ExLab3/Team2/UserApplication/project2/Simulation" -prefix "project2_UA_1"
@IF ERRORLEVEL 1 GOTO failed
@move "project2_UA_1.log" "project2_UA_1_dfgen.log"
@exit 0
:failed
@exit 1
