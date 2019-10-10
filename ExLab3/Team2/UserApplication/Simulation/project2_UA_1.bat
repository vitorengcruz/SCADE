@cd "C:/Listex_2/Team2/UserApplication/Simulation"
@set OCAMLRUNPARAM=b
"C:/Program Files/Esterel Technologies/SCADE R17/SCADE/bin/uaadaptor.exe" -sdy "C:\Listex_2\Team2\UserApplication\project2.sdy" -n "C:\Program Files\Esterel Technologies\SCADE R17\SCADE Display\config\a661_description\a661.xml" -outdir "C:/Listex_2/Team2/UserApplication/Simulation" -k "C:/Listex_2/Team2/UserApplication/Simulation/kcg_trace.xml" -o "project2_UA_1" -i "project2_interface.h"  -encoding "ASCII"  "C:\Listex_2\Team2\DefinitionFile\project2.sgfx"
@IF ERRORLEVEL 1 GOTO failed
@move "project2_UA_1.log" "project2_UA_1_uaadaptor.log"
"C:\Program Files\Esterel Technologies\SCADE R17\SCADE Display\bin\ScadeDisplayConsole.exe" batch generate "C:\Listex_2\Team2\DefinitionFile\project2.etp" -conf "DF Generation" -source "project2.sgfx" -outdir "C:/Listex_2/Team2/UserApplication/Simulation" -prefix "project2_UA_1"
@IF ERRORLEVEL 1 GOTO failed
@move "project2_UA_1.log" "project2_UA_1_dfgen.log"
"C:\Program Files\Esterel Technologies\SCADE R17\SCADE Display\bin\ScadeDisplayConsole.exe" batch  generateServerConf "C:\Listex_2\Team2\DefinitionFile\project2.etp" -spec "project2.sgfx" -out "C:/Listex_2/Team2/UserApplication/Simulation/project2_UA_1_conf.xml"
@exit 0
:failed
@exit 1
