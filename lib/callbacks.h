#include<stdlib.h>
#include<GL\glut.h>

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
    int arr[3] = {5, 1, 3};
    /* Display bars that represent the array */
    glColor3f(1.0f, 0.0f, 0.0f);
    int position = 0;

    for(int i = 0; i < 3; i++){
        glBegin(GL_POLYGON);
            //
            float a = 0.5;
            float b = 0.3;
            float x1 = i - a;
            float x2 = i - b;
            float y1 = 0.0;
            float y2 = 1.0;

            glVertex2f(x1, y1);
            glVertex2f(x2, y1);
            glVertex2f(x2, y2);
            glVertex2f(x1, y2);
        glEnd();
    }


    glFlush();
}