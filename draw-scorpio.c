#include <GL/glut.h>
#include <stdlib.h>

#define WINDOW_WIDTH 400
#define WINDOW_HEIGHT 550
#define WINDOW_TITLE "Scorpio"

void drawScorpio() {
    glClearColor(1, 1, 1, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0, 0);
    
    // GL_POINTS
    // GL_LINES
    // GL_LINE_LOOP
    // GL_LINE_STRIP
    // GL_TRIANGLES
    // GL_TRIANGLE_STRIP
    // GL_TRIANGLE_FAN
    // GL_QUADS
    // GL_QUAD_STRIP
    // GL_POLYGON
    
    glBegin(GL_POLYGON);
    glVertex2f(168, WINDOW_HEIGHT - 360); // left bottom
    glVertex2f(213, WINDOW_HEIGHT - 365); // right bottom
    glVertex2f(225, WINDOW_HEIGHT - 343); // right top
    glVertex2f(160, WINDOW_HEIGHT - 337); // left top
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(161, WINDOW_HEIGHT - 324); // left bottom
    glVertex2f(220, WINDOW_HEIGHT - 330); // right bottom
    glVertex2f(237, WINDOW_HEIGHT - 307); // right top
    glVertex2f(155, WINDOW_HEIGHT - 302); // left top
    glEnd();

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
    glutCreateWindow(WINDOW_TITLE);
    
    glutDisplayFunc(drawScorpio);
    
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, WINDOW_WIDTH, 0, WINDOW_HEIGHT);
    glMatrixMode(GL_MODELVIEW);

    glutMainLoop();
    return 0;
}