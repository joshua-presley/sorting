#include<stdlib.h>
#include<gl\glut.h>
#include"lib\callbacks.h"

int main(int argc, char** argv){
    glutInit(&argc, argv);

    glutCreateWindow("GLUT Test");
    glutKeyboardFunc(&keyboard);
    glutDisplayFunc(&display);
    

    glutMainLoop();


    return EXIT_SUCCESS;
}