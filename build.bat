cl /EHsc src/*.cpp -I include -I C:\SDL2-2.0.5\include /link OpenGL32.lib GLu32.lib /LIBPATH:C:\SDL2-2.0.5\lib\x64 SDL2.lib SDL2main.lib /out:SimulationOnde.exe