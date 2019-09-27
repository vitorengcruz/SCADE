@cd "C:/Repositorio_ITA/SCADE/ExLab1/landing_gear/LandingGear/Simulation"
@set OCAMLRUNPARAM=b
"C:/Program Files/ANSYS Inc/v194/SCADE/SCADE/bin/uaadaptor.exe" -sdy "C:\Repositorio_ITA\SCADE\ExLab1\landing_gear\LandingGear\LandingGear.sdy" -n "C:\Program Files\ANSYS Inc\v194\SCADE\SCADE Display\config\a661_description\a661.xml" -outdir "C:/Repositorio_ITA/SCADE/ExLab1/landing_gear/LandingGear/Simulation" -k "C:/Repositorio_ITA/SCADE/ExLab1/landing_gear/LandingGear/Simulation/kcg_trace.xml" -o "LandingGear_UA_1" -i "LandingGear_interface.h"  -encoding "UTF-8"  "C:\Repositorio_ITA\SCADE\ExLab1\landing_gear\LG.sgfx"
@IF ERRORLEVEL 1 GOTO failed
@move "LandingGear_UA_1.log" "LandingGear_UA_1_uaadaptor.log"
"C:\Program Files\ANSYS Inc\v194\SCADE\SCADE Display\bin\ScadeDisplayConsole.exe"   batch generate "C:\Repositorio_ITA\SCADE\ExLab1\landing_gear\landing_gear.etp" -conf "DF Generation" -sconf -outdir "C:/Repositorio_ITA/SCADE/ExLab1/landing_gear/LandingGear/Simulation" -prefix "LandingGear_UA_1"
@IF ERRORLEVEL 1 GOTO failed
@move "LandingGear_UA_1.log" "LandingGear_UA_1_dfgen.log"
@exit 0
:failed
@exit 1
