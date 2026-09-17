#define GL_SILENCE_DEPRECATION
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <cmath>

const float PI = 3.14159265f;
const int SEGMENTS = 16;
const float RADIUS = 0.7f;
const float OUTER_RADIUS = 0.7f;
const float INNER_RADIUS = 0.3f;

void display(){

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f, 1.0f, 0.0f);
    
    
    glShadeModel(GL_SMOOTH);

    glBegin(GL_TRIANGLE_FAN);

    // Center hub
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.0f, 0.0f);

    // Outer vertices
    for (int i = 0; i <= SEGMENTS; i++)
    {
        float angle = i * 2.0f * PI / SEGMENTS;

        float x = RADIUS * cos(angle);
        float y = RADIUS * sin(angle);

        if (i % 2 == 0)
            glColor3f(1.0f, 0.1647f, 0.5765f);  // bright magenta
        else
            glColor3f(1.0f, 1.0f, 0.0f);  // yellow

        glVertex2f(x, y);
    }

    glEnd();
    glFlush();
    }

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("MP02 - Retro Sunburst Fan");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}