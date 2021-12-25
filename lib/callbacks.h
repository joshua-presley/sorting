#include<stdlib.h>
#include<GL\glut.h>
#include"sorts.h"

/* Keyboard callback function */
void keyboard(unsigned char key, int x, int y)
{
  switch (key)
  {
    /* Exit on escape key press */
    case '\x1B':
    {
      exit(EXIT_SUCCESS);
      break;
    }
  }
}

/* Display callback function */
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    int * arr = GetArray();
    /* Display bars that represent the array */
    BubbleSort(arr, 100);
}

void idle(void){
    glutPostRedisplay();
}