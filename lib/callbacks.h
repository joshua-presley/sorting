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
    int arr[14] = {5, 1, 3, 4, 7, 10, 42, 53, 2, 15, 21, 24, 81, 7};
    /* Display bars that represent the array */
    BubbleSort(arr, 14);
}