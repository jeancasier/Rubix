//
// File:        mycube.c
// Author:      Matt Daisley
// Created:     4/25/2012
// Project:     Source code for Make a Cube in OpenGL
// Description: Creates an OpenGL window and draws a 3D cube
//              That the user can rotate using the arrow keys
//
// Controls:    Left Arrow  - Rotate Left
//              Right Arrow - Rotate Right
//              Up Arrow    - Rotate Up
//              Down Arrow  - Rotate Down

// ----------------------------------------------------------
// Includes
// ----------------------------------------------------------
#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#define GL_GLEXT_PROTOTYPES
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <OpenGL/glut.h>
#endif

// ----------------------------------------------------------
// Function Prototypes
// ----------------------------------------------------------
void display();
void specialKeys();

// ----------------------------------------------------------
// Global Variables
// ----------------------------------------------------------
double rotate_y=0;
double rotate_x=0;

// ----------------------------------------------------------
// display() Callback function
// ----------------------------------------------------------
void display(){
    
    //  Clear screen and Z-buffer
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    
    // Reset transformations
    glLoadIdentity();
    
    // Other Transformations
    glTranslatef( 0.0, 0.0, 0.0 );
    glRotatef( 0, 1.0, 0.0, 0.0 );
    
    // Rotate when user changes rotate_x and rotate_y
    glRotatef( rotate_x, 1.0, 0.0, 0.0 );
    glRotatef( rotate_y, 0.0, 1.0, 0.0 );
    
    // Other Transformations
    // glScalef( 2.0, 2.0, 0.0 );          // Not included
    
    // FRONT SIDE (BLUE)
    float p1=-0.46;
    float p2=p1+0.30;
    float p3=p2+0.01;
    float p4=p3+0.30;
    float p5=p4+0.01;
    float p6=p5+0.30;
    
    //BAS GAUCHE
    glBegin(GL_POLYGON);
    glColor3f( 0.0, 0.0, 1.0 );
    glVertex3f(p1,p1,p1); glVertex3f(p1,p2,p1); glVertex3f(p2,p2,p1); glVertex3f(p2,p1,p1);    glEnd();
    
    //MILIEU GAUCHE
    glBegin(GL_POLYGON);
    glVertex3f(p1,p3,p1); glVertex3f(p1,p4,p1); glVertex3f(p2,p4,p1); glVertex3f(p2,p3,p1);    glEnd();
    
    //HAUT GAUCHE
    glBegin(GL_POLYGON);
    glVertex3f(p1,p5,p1); glVertex3f(p1,p6,p1); glVertex3f(p2,p6,p1); glVertex3f(p2,p5,p1);    glEnd();
    
    //MILIEU HAUT
    glBegin(GL_POLYGON);
    glVertex3f(p3,p5,p1); glVertex3f(p3,p6,p1); glVertex3f(p4,p6,p1); glVertex3f(p4,p5,p1);    glEnd();
    
    //HAUT DROIT
    glBegin(GL_POLYGON);
    glVertex3f(p5,p5,p1); glVertex3f(p5,p6,p1); glVertex3f(p6,p6,p1); glVertex3f(p6,p5,p1);    glEnd();
    
    //MILIEU DROIT
    glBegin(GL_POLYGON);
    glVertex3f(p5,p3,p1); glVertex3f(p5,p4,p1); glVertex3f(p6,p4,p1); glVertex3f(p6,p3,p1);    glEnd();
    
    //BAS DROIT
    glBegin(GL_POLYGON);
    glVertex3f(p5,p1,p1); glVertex3f(p5,p2,p1); glVertex3f(p6,p2,p1); glVertex3f(p6,p1,p1);    glEnd();
    
    //MILIEU BAS
    glBegin(GL_POLYGON);
    glVertex3f(p3,p1,p1); glVertex3f(p3,p2,p1); glVertex3f(p4,p2,p1); glVertex3f(p4,p1,p1);    glEnd();
    
    //MILIEU
    glBegin(GL_POLYGON);
    glVertex3f(p3,p3,p1); glVertex3f(p3,p4,p1); glVertex3f(p4,p4,p1); glVertex3f(p4,p3,p1);    glEnd();
    
    /////////////////////////////////////////////////////////////
    // BACK SIDE (GREEN)
    
    //BAS GAUCHE
    glBegin(GL_POLYGON);
    glColor3f( 0.0, 1.0, 0.0 );
    glVertex3f(p1,p1,p6); glVertex3f(p1,p2,p6); glVertex3f(p2,p2,p6); glVertex3f(p2,p1,p6);    glEnd();
    
    //MILIEU GAUCHE
    glBegin(GL_POLYGON);
    glVertex3f(p1,p3,p6); glVertex3f(p1,p4,p6); glVertex3f(p2,p4,p6); glVertex3f(p2,p3,p6);    glEnd();
    
    //HAUT GAUCHE
    glBegin(GL_POLYGON);
    glVertex3f(p1,p5,p6); glVertex3f(p1,p6,p6); glVertex3f(p2,p6,p6); glVertex3f(p2,p5,p6);    glEnd();
    
    //MILIEU HAUT
    glBegin(GL_POLYGON);
    glVertex3f(p3,p5,p6); glVertex3f(p3,p6,p6); glVertex3f(p4,p6,p6); glVertex3f(p4,p5,p6);    glEnd();
    
    //HAUT DROIT
    glBegin(GL_POLYGON);
    glVertex3f(p5,p5,p6); glVertex3f(p5,p6,p6); glVertex3f(p6,p6,p6); glVertex3f(p6,p5,p6);    glEnd();
    
    //MILIEU DROIT
    glBegin(GL_POLYGON);
    glVertex3f(p5,p3,p6); glVertex3f(p5,p4,p6); glVertex3f(p6,p4,p6); glVertex3f(p6,p3,p6);    glEnd();
    
    //BAS DROIT
    glBegin(GL_POLYGON);
    glVertex3f(p5,p1,p6); glVertex3f(p5,p2,p6); glVertex3f(p6,p2,p6); glVertex3f(p6,p1,p6);    glEnd();
    
    //MILIEU BAS
    glBegin(GL_POLYGON);
    glVertex3f(p3,p1,p6); glVertex3f(p3,p2,p6); glVertex3f(p4,p2,p6); glVertex3f(p4,p1,p6);    glEnd();
    
    //MILIEU
    glBegin(GL_POLYGON);
    glVertex3f(p3,p3,p6); glVertex3f(p3,p4,p6); glVertex3f(p4,p4,p6); glVertex3f(p4,p3,p6);    glEnd();
    
    /////////////////////////////////////////////////////////////
    // TOP SIDE (WHITE)
    
    //BAS GAUCHE
    glBegin(GL_POLYGON);
    glColor3f( 1.0, 1.0, 1.0 );
    glVertex3f(p1,p6,p1); glVertex3f(p1,p6,p2); glVertex3f(p2,p6,p2); glVertex3f(p2,p6,p1);    glEnd();
    
    //MILIEU GAUCHE
    glBegin(GL_POLYGON);
    glVertex3f(p1,p6,p3); glVertex3f(p1,p6,p4); glVertex3f(p2,p6,p4); glVertex3f(p2,p6,p3);    glEnd();
    
    //HAUT GAUCHE
    glBegin(GL_POLYGON);
    glVertex3f(p1,p6,p5); glVertex3f(p1,p6,p6); glVertex3f(p2,p6,p6); glVertex3f(p2,p6,p5);    glEnd();
    
    //MILIEU HAUT
    glBegin(GL_POLYGON);
    glVertex3f(p3,p6,p5); glVertex3f(p3,p6,p6); glVertex3f(p4,p6,p6); glVertex3f(p4,p6,p5);    glEnd();
    
    //HAUT DROIT
    glBegin(GL_POLYGON);
    glVertex3f(p5,p6,p5); glVertex3f(p5,p6,p6); glVertex3f(p6,p6,p6); glVertex3f(p6,p6,p5);    glEnd();
    
    //MILIEU DROIT
    glBegin(GL_POLYGON);
    glVertex3f(p5,p6,p3); glVertex3f(p5,p6,p4); glVertex3f(p6,p6,p4); glVertex3f(p6,p6,p3);    glEnd();
    
    //BAS DROIT
    glBegin(GL_POLYGON);
    glVertex3f(p5,p6,p1); glVertex3f(p5,p6,p2); glVertex3f(p6,p6,p2); glVertex3f(p6,p6,p1);    glEnd();
    
    //MILIEU BAS
    glBegin(GL_POLYGON);
    glVertex3f(p3,p6,p1); glVertex3f(p3,p6,p2); glVertex3f(p4,p6,p2); glVertex3f(p4,p6,p1);    glEnd();
    
    //MILIEU
    glBegin(GL_POLYGON);
    glVertex3f(p3,p6,p3); glVertex3f(p3,p6,p4); glVertex3f(p4,p6,p4); glVertex3f(p4,p6,p3);    glEnd();
    
    /////////////////////////////////////////////////////////////
    // BOTTOM SIDE (YELLOW)
    
    //BAS GAUCHE
    glBegin(GL_POLYGON);
    glColor3f( 1.0, 1.0, 0.0 );
    glVertex3f(p1,p1,p1); glVertex3f(p1,p1,p2); glVertex3f(p2,p1,p2); glVertex3f(p2,p1,p1);    glEnd();
    
    //MILIEU GAUCHE
    glBegin(GL_POLYGON);
    glVertex3f(p1,p1,p3); glVertex3f(p1,p1,p4); glVertex3f(p2,p1,p4); glVertex3f(p2,p1,p3);    glEnd();
    
    //HAUT GAUCHE
    glBegin(GL_POLYGON);
    glVertex3f(p1,p1,p5); glVertex3f(p1,p1,p6); glVertex3f(p2,p1,p6); glVertex3f(p2,p1,p5);    glEnd();
    
    //MILIEU HAUT
    glBegin(GL_POLYGON);
    glVertex3f(p3,p1,p5); glVertex3f(p3,p1,p6); glVertex3f(p4,p1,p6); glVertex3f(p4,p1,p5);    glEnd();
    
    //HAUT DROIT
    glBegin(GL_POLYGON);
    glVertex3f(p5,p1,p5); glVertex3f(p5,p1,p6); glVertex3f(p6,p1,p6); glVertex3f(p6,p1,p5);    glEnd();
    
    //MILIEU DROIT
    glBegin(GL_POLYGON);
    glVertex3f(p5,p1,p3); glVertex3f(p5,p1,p4); glVertex3f(p6,p1,p4); glVertex3f(p6,p1,p3);    glEnd();
    
    //BAS DROIT
    glBegin(GL_POLYGON);
    glVertex3f(p5,p1,p1); glVertex3f(p5,p1,p2); glVertex3f(p6,p1,p2); glVertex3f(p6,p1,p1);    glEnd();
    
    //MILIEU BAS
    glBegin(GL_POLYGON);
    glVertex3f(p3,p1,p1); glVertex3f(p3,p1,p2); glVertex3f(p4,p1,p2); glVertex3f(p4,p1,p1);    glEnd();
    
    //MILIEU
    glBegin(GL_POLYGON);
    glVertex3f(p3,p1,p3); glVertex3f(p3,p1,p4); glVertex3f(p4,p1,p4); glVertex3f(p4,p1,p3);    glEnd();
    
    /////////////////////////////////////////////////////////////
    // LEFT SIDE (RED)
    
    //BAS GAUCHE
    glBegin(GL_POLYGON);
    glColor3f( 1.0, 0.0, 0.0 );
    glVertex3f(p1,p1,p1); glVertex3f(p1,p1,p2); glVertex3f(p1,p2,p2); glVertex3f(p1,p2,p1);    glEnd();
    
    //MILIEU GAUCHE
    glBegin(GL_POLYGON);
    glVertex3f(p1,p1,p3); glVertex3f(p1,p1,p4); glVertex3f(p1,p2,p4); glVertex3f(p1,p2,p3);    glEnd();
    
    //HAUT GAUCHE
    glBegin(GL_POLYGON);
    glVertex3f(p1,p1,p5); glVertex3f(p1,p1,p6); glVertex3f(p1,p2,p6); glVertex3f(p1,p2,p5);    glEnd();
    
    //MILIEU HAUT
    glBegin(GL_POLYGON);
    glVertex3f(p1,p3,p5); glVertex3f(p1,p3,p6); glVertex3f(p1,p4,p6); glVertex3f(p1,p4,p5);    glEnd();
    
    //HAUT DROIT
    glBegin(GL_POLYGON);
    glVertex3f(p1,p5,p5); glVertex3f(p1,p5,p6); glVertex3f(p1,p6,p6); glVertex3f(p1,p6,p5);    glEnd();
    
    //MILIEU DROIT
    glBegin(GL_POLYGON);
    glVertex3f(p1,p5,p3); glVertex3f(p1,p5,p4); glVertex3f(p1,p6,p4); glVertex3f(p1,p6,p3);    glEnd();
    
    //BAS DROIT
    glBegin(GL_POLYGON);
    glVertex3f(p1,p5,p1); glVertex3f(p1,p5,p2); glVertex3f(p1,p6,p2); glVertex3f(p1,p6,p1);    glEnd();
    
    //MILIEU BAS
    glBegin(GL_POLYGON);
    glVertex3f(p1,p3,p1); glVertex3f(p1,p3,p2); glVertex3f(p1,p4,p2); glVertex3f(p1,p4,p1);    glEnd();
    
    //MILIEU
    glBegin(GL_POLYGON);
    glVertex3f(p1,p3,p3); glVertex3f(p1,p3,p4); glVertex3f(p1,p4,p4); glVertex3f(p1,p4,p3);    glEnd();
    
    /////////////////////////////////////////////////////////////
    // RIGHT SIDE (ORANGE)
    
    //BAS GAUCHE
    glBegin(GL_POLYGON);
    glColor3f( 1.0, 0.5, 0.0 );
    glVertex3f(p6,p1,p1); glVertex3f(p6,p1,p2); glVertex3f(p6,p2,p2); glVertex3f(p6,p2,p1);    glEnd();
    
    //MILIEU GAUCHE
    glBegin(GL_POLYGON);
    glVertex3f(p6,p1,p3); glVertex3f(p6,p1,p4); glVertex3f(p6,p2,p4); glVertex3f(p6,p2,p3);    glEnd();
    
    //HAUT GAUCHE
    glBegin(GL_POLYGON);
    glVertex3f(p6,p1,p5); glVertex3f(p6,p1,p6); glVertex3f(p6,p2,p6); glVertex3f(p6,p2,p5);    glEnd();
    
    //MILIEU HAUT
    glBegin(GL_POLYGON);
    glVertex3f(p6,p3,p5); glVertex3f(p6,p3,p6); glVertex3f(p6,p4,p6); glVertex3f(p6,p4,p5);    glEnd();
    
    //HAUT DROIT
    glBegin(GL_POLYGON);
    glVertex3f(p6,p5,p5); glVertex3f(p6,p5,p6); glVertex3f(p6,p6,p6); glVertex3f(p6,p6,p5);    glEnd();
    
    //MILIEU DROIT
    glBegin(GL_POLYGON);
    glVertex3f(p6,p5,p3); glVertex3f(p6,p5,p4); glVertex3f(p6,p6,p4); glVertex3f(p6,p6,p3);    glEnd();
    
    //BAS DROIT
    glBegin(GL_POLYGON);
    glVertex3f(p6,p5,p1); glVertex3f(p6,p5,p2); glVertex3f(p6,p6,p2); glVertex3f(p6,p6,p1);    glEnd();
    
    //MILIEU BAS
    glBegin(GL_POLYGON);
    glVertex3f(p6,p3,p1); glVertex3f(p6,p3,p2); glVertex3f(p6,p4,p2); glVertex3f(p6,p4,p1);    glEnd();
    
    //MILIEU
    glBegin(GL_POLYGON);
    glVertex3f(p6,p3,p3); glVertex3f(p6,p3,p4); glVertex3f(p6,p4,p4); glVertex3f(p6,p4,p3);    glEnd();
    
    glFlush();
    glutSwapBuffers();
    
}

// ----------------------------------------------------------
// specialKeys() Callback Function
// ----------------------------------------------------------
void specialKeys( int key, int x, int y ) {
    
    //  Right arrow - increase rotation by 15 degree
    if (key == GLUT_KEY_RIGHT)
        rotate_y += 15;
    
    //  Left arrow - decrease rotation by 15 degree
    else if (key == GLUT_KEY_LEFT)
        rotate_y -= 15;
    
    else if (key == GLUT_KEY_UP)
        rotate_x += 15;
    
    else if (key == GLUT_KEY_DOWN)
        rotate_x -= 15;
    
    //  Request display update
    glutPostRedisplay();
    
}

// ----------------------------------------------------------
// main() function
// ----------------------------------------------------------
int main(int argc, char* argv[]){

    
    //  Initialize GLUT and process user parameters
    glutInit(&argc,argv);
    
    //  Request double buffered true color window with Z-buffer
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    
    glutInitWindowSize(800,800);
    
    // Create window
    glutCreateWindow("Rubiks' Cube");
    
    //  Enable Z-buffer depth test
    glEnable(GL_DEPTH_TEST);
    
    // Callback functions
    glutDisplayFunc(display);
    glutSpecialFunc(specialKeys);
    
    //  Pass control to GLUT for events
    glutMainLoop();
    
    //  Return to OS
    return 0;
    
}
