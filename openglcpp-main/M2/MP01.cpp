#define GL_SILENCE_DEPRECATION
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <cmath>

const float PI = 3.14159265f;
const float OUTER_RADIUS = 0.7f;
const float INNER_RADIUS = 0.3f;

void display(){

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f, 1.0f, 0.0f);
    glLineWidth(3.0f);
    glEnable(GL_LINE_STIPPLE);
    glLineStipple(2, 0x0F0F);

    glBegin(GL_LINE_LOOP);

    for (int i = 0; i < 10; i++)
    {
        
        float angle = i * PI / 5.0f + PI / 2.0f;
        float radius;

        if (i % 2 == 0)
            radius = OUTER_RADIUS;
        else
            radius = INNER_RADIUS;

        float x = radius * cos(angle);
        float y = radius * sin(angle);

        glVertex2f(x, y);
    }
    

    glEnd();
    glDisable(GL_LINE_STIPPLE);
    glFlush();
    }

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("MP01 - Stippled Star Frame");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}