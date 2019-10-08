@cd "C:/Repositorio_ITA/SCADE/ExLab3/Team1/UserApplication/project1/Simulation"
@set OCAMLRUNPARAM=b
"C:/Program Files/ANSYS Inc/v194/SCADE/SCADE/bin/uaadaptor.exe" -sdy "C:\Repositorio_ITA\SCADE\ExLab3\Team1\UserApplication\project1\project1.sdy" -n "C:\Program Files\ANSYS Inc\v194\SCADE\SCADE Display\config\a661_description\a661.xml" -outdir "C:/Repositorio_ITA/SCADE/ExLab3/Team1/UserApplication/project1/Simulation" -k "C:/Repositorio_ITA/SCADE/ExLab3/Team1/UserApplication/project1/Simulation/kcg_trace.xml" -o "project1_UA_1" -i "project1_interface.h"  -encoding "UTF-8"  "C:\Repositorio_ITA\SCADE\ExLab3\Team1\DefinitionFile\project1.sgfx"
@IF ERRORLEVEL 1 GOTO failed
@move "project1_UA_1.log" "project1_UA_1_uaadaptor.log"
"C:\Program Files\ANSYS Inc\v194\SCADE\SCADE Display\bin\ScadeDisplayConsole.exe"   batch generate "C:\Repositorio_ITA\SCADE\ExLab3\Team1\DefinitionFile\project1.etp" -conf "DF Generation" -sconf -outdir "C:/Repositorio_ITA/SCADE/ExLab3/Team1/UserApplication/project1/Simulation" -prefix "project1_UA_1"
@IF ERRORLEVEL 1 GOTO failed
@move "project1_UA_1.log" "project1_UA_1_dfgen.log"
@exit 0
:failed
@exit 1
