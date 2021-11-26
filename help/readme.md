Compiling GLUT

g++ -c -o test.o test.c -I"C:\Program Files\Common Files\MinGW\freeglut\include" -L".\lib"
  
g++ -o test.exe test.o -L"C:\Program Files\Common Files\MinGW\freeglut\lib\x64" -L".\lib" -lfreeglut -lopengl32 -Wl,--subsystem,windows
