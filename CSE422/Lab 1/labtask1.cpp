#include <windows.h> 
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
void init(void) {   
    glClearColor(0.0,0.0,0.0,0.0);    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();   
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
       }  

void Draw() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f( 0 ,1 , 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.25, 0.25);
    glVertex2f(0.75, 0.25);
    glVertex2f(0.75, 0.75);
    glVertex2f(0.5, 0.9);
    glVertex2f(0.25, 0.75);
    glEnd();

    glColor3f( 1 ,0 , 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.75, 0.25);
    glVertex2f(0.75, 0.75);
    glVertex2f(0.25, 0.75);
    glVertex2f(0.25, 0.25);
    glEnd();
    glColor3f(1, 1, 0); 
    glBegin(GL_POLYGON);
    glVertex2f(0.4, 0.25);
    glVertex2f(0.4, 0.5);
    glVertex2f(0.55, 0.5);
    glVertex2f(0.55, 0.25);
    glEnd();
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0.57, 0.57);
    glVertex2f(0.65, 0.57); 
    glVertex2f(0.65, 0.65); 
    glVertex2f(0.57, 0.65);
    glEnd();
    glutSwapBuffers();
    }

int main(int argc,char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Graphics Lab 203-15-3906");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
    }