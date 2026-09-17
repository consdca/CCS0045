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
    
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    //Red Panel
    glBegin(GL_QUADS);

    glColor4f(1.0f, 0.0f, 0.1f, 0.5f); // red, 50% opacity
    glVertex2f(-0.65f, -0.55f);
    glVertex2f(-0.05f, -0.55f);
    glVertex2f(-0.05f,  0.45f);
    glVertex2f(-0.65f,  0.45f);

    glEnd();

    //Green Panel
    glBegin(GL_QUADS);

    glColor4f(0.0f, 1.0f, 0.2f, 0.5f); // green, 50% opacity
    glVertex2f(-0.35f, -0.25f);
    glVertex2f(0.35f, -0.25f);
    glVertex2f(0.35f,  0.65f);
    glVertex2f(-0.35f,  0.65f);

    glEnd();

    //Blue Panel
    glBegin(GL_QUADS);

    glColor4f(0.0f, 0.2f, 1.0f, 0.5f); // blue, 50% opacity
    glVertex2f(0.05f, -0.55f);
    glVertex2f(0.65f, -0.55f);
    glVertex2f(0.65f,  0.45f);
    glVertex2f(0.05f,  0.45f);

    glEnd();
    glDisable(GL_BLEND);
    glFlush();
    }

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("MP03 - Stained Glass Panels");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}