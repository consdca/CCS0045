#define GL_SILENCE_DEPRECATION
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <iostream>
using namespace std;

void display() {
glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_QUAD_STRIP);

// Pair 1
glColor3f(0.4f, 0.4f, 0.4f);
glVertex2f(-0.9f, -0.2f); // bottom
glVertex2f(-0.9f, 0.2f); // top

// Pair 2
glColor3f(0.6f, 0.6f, 0.6f);
glVertex2f(-0.5f, -0.4f);
glVertex2f(-0.5f, 0.0f);

// Pair 3
glColor3f(0.8f, 0.8f, 0.8f);
glVertex2f(-0.1f, 0.1f);
glVertex2f(-0.1f, 0.5f);

// Pair 4
glColor3f(0.5f, 0.5f, 0.5f);
glVertex2f( 0.3f, -0.3f);
glVertex2f( 0.3f, 0.1f);

// Pair 5
glColor3f(0.7f, 0.7f, 0.7f);
glVertex2f( 0.7f, 0.2f);
glVertex2f( 0.7f, 0.6f);

// Pair 6
glColor3f(0.9f, 0.9f, 0.9f);
glVertex2f( 1.0f, -0.1f);
glVertex2f( 1.0f, 0.3f);

glEnd();

glFlush();
}

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitWindowSize(800, 400);
glutCreateWindow("MP04 - Winding Terrain Ribbon");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}