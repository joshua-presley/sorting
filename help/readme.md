Compiling GLUT

g++ -c -o main.o main.cpp -I"C:\Program Files\Common Files\MinGW\freeglut\include" -L".\lib"
  
g++ -o main.exe main.o -L"C:\Program Files\Common Files\MinGW\freeglut\lib\x64" -L".\lib" -lfreeglut -lopengl32 -Wl,--subsystem,windows
