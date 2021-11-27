#include<iostream>
using namespace std;
#include<gl\glut.h>

void Swap(int &i, int &j){
    int tmp = i;
    i = j;
    j = tmp;
}

void DrawArray(int * arr, size_t size)
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f );
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    float width = 2.0f/size;
    float x1 = -1.0f;
    float x2 = x1 + width;

    for(int i = 0; i < size; i++){
        float x, y, z;
        x = 1.0f/(i+0.1);
        y = i/size;
        z = size/size*i;
        glColor3f(x, y, z);

        float y1 = -1.0f;
        float y2 = (*(arr + i) / 50) - 1;
        glBegin(GL_POLYGON);


            glVertex2f(x1, y1);
            glVertex2f(x2, y1);
            glVertex2f(x2, y2);
            glVertex2f(x1, y2);
        
        
        glEnd();

        x1 += width;
        x2 += width;
    }
    
    glFlush();
}

void PrintArray(int arr[], size_t size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << ' ';
    }
}

int * GetArray(){
    srand(time(NULL));
    const int size = 10000;
    static int arr[size];

    for(int i = 0; i < 10000; i++){
        arr[i] = rand() % 100 + 1;
    }

    return arr;
}