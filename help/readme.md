Compiling GLUT

gcc -c -o test.o test.c -I"C:\Program Files\Common Files\MinGW\freeglut\include"
  
gcc -o test.exe test.o -L"C:\Program Files\Common Files\MinGW\freeglut\lib\x64" -lfreeglut -lopengl32 -Wl,--subsystem,windows
