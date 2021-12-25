#include<iostream>
using namespace std;
#include<gl\glut.h>

void Swap(int &i, int &j){
    int tmp = i;
    i = j;
    j = tmp;
}

void DrawArray(int * arr, size_t size, int j)
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f );
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    float width = 2.0f/size;
    float x1 = -1.0f;
    float x2 = x1 + width;

    for(int i = 0; i < size; i++){
        float x, y, z;
        if(i == j){
            glColor3f(1.0f, 0.0f, 0.0f);
        }
        else{
            glColor3f(0.0f, 0.0f, 1.0f);
        }

        float y1 = -1.0f;
        float y2 = (*(arr + i) / 50.0f) - 1.0f;
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
    const int size = 100;
    static int arr[size];

    for(int i = 0; i < 100; i++){
        arr[i] = rand() % 100 + 1;
    }

    return arr;
}