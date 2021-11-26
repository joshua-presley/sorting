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

    float x1 = -1.0f;
    float x2 = -0.8f;

    for(int i = 0; i < 3; i++){



        float y1 = 0.0f;
        float y2 = (1/arr[i]);
        glBegin(GL_POLYGON);


            glVertex2f(x1, y1);
            glVertex2f(x2, y1);
            glVertex2f(x2, y2);
            glVertex2f(x1, y2);
        
        
        glEnd();

        x1 += 0.5f;
        x2 += 0.5f;
    }


    glFlush();
}