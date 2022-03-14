#include<stdlib.h>
#include<gl\glut.h>
#include"lib\callbacks.h"

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Sorting");
    glutKeyboardFunc(&keyboard);
    glutDisplayFunc(&display);
    glutIdleFunc(&idle);

    glutMainLoop();


    return EXIT_SUCCESS;
}