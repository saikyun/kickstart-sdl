cl.exe /WX /nologo /EHsc /MD src\main.c /Fe:build\main.exe /Fo:build\main.obj /I SDL\include /link /LIBPATH:SDL\lib\x64 SDL2.lib SDL2main.lib shell32.lib /SUBSYSTEM:CONSOLE

build\main.exe