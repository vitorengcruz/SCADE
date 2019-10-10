@SET PATH=C:\Program Files\ANSYS Inc\v194\SCADE/SCADE A661/bin;%PATH%

@echo off

cd .

start A661Server.exe "..\DefinitionFile\DF\server_conf.xml" "..\DefinitionFile\DF\UA_2.bin"
