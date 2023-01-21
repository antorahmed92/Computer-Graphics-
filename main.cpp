#include<cstdio>
#include <GL/gl.h>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
#include<MMSystem.h>
# define PI           3.14159265358979323846

GLfloat position1 = 0.0f;
GLfloat speed1 = 0.02f;

GLfloat position2 = 0.0f;
GLfloat speed2 = 0.01f;

GLfloat position3 = 0.0f;
GLfloat speed3 = 0.02f;

GLfloat position4 = 0.0f;
GLfloat speed4 = 0.01f;

GLfloat position5 = 0.0f;
GLfloat speed5 = 0.01f;


void update(int value)
{
     if(position1 <-1.0)
        position1 = 0.2f;
        position1 -= speed1;
        glutPostRedisplay();

    if(position2 >1.0)
        position2 = -1.0f;
        position2 += speed2;
        glutPostRedisplay();

    if(position3 <1.0)
        position3 = -1.0f;
        position3 -= speed3;
        glutPostRedisplay();

    if(position4 >1.8)
        position4 = -1.0f;
        position4 += speed4;
        glutPostRedisplay();

	if(position5 <-1.8)
        position5 = 1.0f;
        position5 -= speed5;
        glutPostRedisplay();

    glutTimerFunc(100, update, 0);
}

void SpecialInput(int key, int x, int y)
{
    switch(key)
    {
    case GLUT_KEY_UP:

        break;
    case GLUT_KEY_DOWN:

        break;
    case GLUT_KEY_LEFT:
        speed2=.02;
        break;
    case GLUT_KEY_RIGHT:
        speed2=.05;
        break;
    }
    glutPostRedisplay();
}


void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}


void day(void) {
	glClearColor(1.0, 1.0, 1.0, 1.0); //BackgroundColor
    glClear(GL_COLOR_BUFFER_BIT);

    //Sky
    glBegin(GL_QUADS);
    glColor3ub(201, 240, 245);   //212, 245, 248
    glVertex2f(-1, -0.5);
    glVertex2f(1, -0.5);
    glVertex2f(1, 1);
    glVertex2f(-1, 1);
    glEnd();

    //Main Building
    glBegin(GL_QUADS);
    glColor3ub(164, 164, 164);
    glVertex2f(-0.32, -0.5);
    glVertex2f(0.6, -0.5);
    glVertex2f(0.6, 0.5);
    glVertex2f(-0.32, 0.5);
    glEnd();

    //left Main Building
    glBegin(GL_QUADS);
    glColor3ub(164, 164, 164);
    glVertex2f(-0.6, -0.5);
    glVertex2f(-0.32, -0.5);
    glVertex2f(-0.32, 0.5);
    glVertex2f(-0.6, 0.47);
    glEnd();

    //Left Side
    glBegin(GL_POLYGON);
    glColor3ub(86, 194, 245);
    glVertex2f(-0.59, -0.48);
    glVertex2f (-0.32,-0.48);
    glVertex2f (-0.32,0.18);
    glVertex2f (-0.4,0.17);
    glVertex2f (-0.4,0.47);
    glVertex2f(-0.59, 0.45);
    glEnd();

    //Middle Side1
    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(-0.15,0.42);
    glVertex2f(0.54,0.42);
    glVertex2f(0.54,0.48);
    glVertex2f(-0.15,0.48);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(-0.15,0.42);
    glVertex2f(0.54,0.42);
    glVertex2f(0.54,0.48);
    glVertex2f(-0.15,0.48);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(-0.15,0.42);
    glVertex2f(0.54,0.42);
    glVertex2f(0.54,0.48);
    glVertex2f(-0.15,0.48);
    glEnd();

    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(86, 194, 245);
    glVertex2f(-0.28,0.12);
    glVertex2f(0.54,0.12);
    glVertex2f(0.54,0.18);
    glVertex2f(-0.28,0.18);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(86, 194, 245);
    glVertex2f(-0.28,0.12);
    glVertex2f(0.54,0.12);
    glVertex2f(0.54,0.18);
    glVertex2f(-0.28,0.18);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(86, 194, 245);
    glVertex2f(-0.28,0.12);
    glVertex2f(0.54,0.12);
    glVertex2f(0.54,0.18);
    glVertex2f(-0.28,0.18);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(86, 194, 245);
    glVertex2f(-0.28,0.12);
    glVertex2f(0.54,0.12);
    glVertex2f(0.54,0.18);
    glVertex2f(-0.28,0.18);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(86, 194, 245);
    glVertex2f(-0.28,0.12);
    glVertex2f(0.54,0.12);
    glVertex2f(0.54,0.18);
    glVertex2f(-0.28,0.18);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(86, 194, 245);
    glVertex2f(-0.28,0.12);
    glVertex2f(0.54,0.12);
    glVertex2f(0.54,0.18);
    glVertex2f(-0.28,0.18);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(86, 194, 245);
    glVertex2f(-0.28,0.12);
    glVertex2f(0.54,0.12);
    glVertex2f(0.54,0.18);
    glVertex2f(-0.28,0.18);
    glEnd();

    glLoadIdentity();

    //Right Side
    glBegin(GL_QUADS);
    glColor3ub(178, 181, 182);
    glVertex2f(0.6,-0.47);
    glVertex2f(0.68,-0.47);
    glVertex2f(0.68,0.45);
    glVertex2f(0.6,0.45);
    glEnd();

    //Right Quads
    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(0.61,0.35);
    glVertex2f(0.67,0.35);
    glVertex2f(0.67,0.43);
    glVertex2f(0.61,0.43);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(0.61,0.35);
    glVertex2f(0.67,0.35);
    glVertex2f(0.67,0.43);
    glVertex2f(0.61,0.43);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(0.61,0.35);
    glVertex2f(0.67,0.35);
    glVertex2f(0.67,0.43);
    glVertex2f(0.61,0.43);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(0.61,0.35);
    glVertex2f(0.67,0.35);
    glVertex2f(0.67,0.43);
    glVertex2f(0.61,0.43);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(0.61,0.35);
    glVertex2f(0.67,0.35);
    glVertex2f(0.67,0.43);
    glVertex2f(0.61,0.43);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(0.61,0.35);
    glVertex2f(0.67,0.35);
    glVertex2f(0.67,0.43);
    glVertex2f(0.61,0.43);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(0.61,0.35);
    glVertex2f(0.67,0.35);
    glVertex2f(0.67,0.43);
    glVertex2f(0.61,0.43);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(0.61,0.35);
    glVertex2f(0.67,0.35);
    glVertex2f(0.67,0.43);
    glVertex2f(0.61,0.43);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(0.61,0.35);
    glVertex2f(0.67,0.35);
    glVertex2f(0.67,0.43);
    glVertex2f(0.61,0.43);
    glEnd();

    glLoadIdentity();

    //front floor
    glBegin(GL_QUADS);
    glColor3ub(119, 123, 124);
    glVertex2f(-1, -1);
    glVertex2f(1, -1);
    glVertex2f(1, -0.5);
    glVertex2f(-1, -0.5);
    glEnd();

    //road side
    glBegin(GL_QUADS);
    glColor3ub(218, 208, 0);
    glVertex2f(-1, -0.55);
    glVertex2f(1, -0.55);
    glVertex2f(1, -0.5);
    glVertex2f(-1, -0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(218, 208, 0);
    glVertex2f(-1, -1);
    glVertex2f(1, -1);
    glVertex2f(1, -0.95);
    glVertex2f(-1, -0.95);
    glEnd();

    //Cross
    glBegin(GL_QUADS);
    glColor3ub(222, 222, 222);
    glVertex2f(-0.28,-0.59);
    glVertex2f(0,-0.59);
    glVertex2f(0,-0.57);
    glVertex2f(-0.28,-0.57);
    glEnd();

    glTranslatef(0,-.08,0);

    glBegin(GL_QUADS);
    glColor3ub(222, 222, 222);
    glVertex2f(-0.28,-0.59);
    glVertex2f(0,-0.59);
    glVertex2f(0,-0.57);
    glVertex2f(-0.28,-0.57);
    glEnd();

    glTranslatef(0,-.08,0);

    glBegin(GL_QUADS);
    glColor3ub(222, 222, 222);
    glVertex2f(-0.28,-0.59);
    glVertex2f(0,-0.59);
    glVertex2f(0,-0.57);
    glVertex2f(-0.28,-0.57);
    glEnd();

    glTranslatef(0,-.08,0);

    glBegin(GL_QUADS);
    glColor3ub(222, 222, 222);
    glVertex2f(-0.28,-0.59);
    glVertex2f(0,-0.59);
    glVertex2f(0,-0.57);
    glVertex2f(-0.28,-0.57);
    glEnd();

    glTranslatef(0,-.08,0);

    glBegin(GL_QUADS);
    glColor3ub(222, 222, 222);
    glVertex2f(-0.28,-0.59);
    glVertex2f(0,-0.59);
    glVertex2f(0,-0.57);
    glVertex2f(-0.28,-0.57);
    glEnd();

    glLoadIdentity();

    //devider
    glBegin(GL_QUADS);
    glColor3ub(218, 208, 0);
    glVertex2f(-0.78,-0.75);
    glVertex2f(-0.50,-0.75);
    glVertex2f(-0.50,-0.73);
    glVertex2f(-0.78,-0.73);
    glEnd();

    glTranslatef(0.9,0,0);

    glBegin(GL_QUADS);
    glColor3ub(218, 208, 0);
    glVertex2f(-0.78,-0.75);
    glVertex2f(-0.50,-0.75);
    glVertex2f(-0.50,-0.73);
    glVertex2f(-0.78,-0.73);
    glEnd();

    glTranslatef(0.8,0,0);

    glBegin(GL_QUADS);
    glColor3ub(218, 208, 0);
    glVertex2f(-0.78,-0.75);
    glVertex2f(-0.50,-0.75);
    glVertex2f(-0.50,-0.73);
    glVertex2f(-0.78,-0.73);
    glEnd();

    glLoadIdentity();

   ///Tree Right
    glBegin(GL_QUADS);
    glColor3ub(156, 139, 102);
    glVertex2f(0.8,-0.5);
    glVertex2f(0.85,-0.5);
    glVertex2f(0.85,-0.25);
    glVertex2f(0.8,-0.25);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(35, 174, 43);
    glVertex2f(0.75,-0.25);
    glVertex2f(0.9,-0.25);
    glVertex2f(0.825,-0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(36, 211, 47);
    glVertex2f(0.75,-0.2);
    glVertex2f(0.9,-0.2);
    glVertex2f(0.825,-0.05);
    glEnd();

    glLoadIdentity();
    glTranslatef(-1.6,0,0);




    glLoadIdentity();
    ///muktomoncho left
    glTranslatef(-1.6,0,0);
/// stick for muktomoncho
    glBegin(GL_QUADS);
    glColor3ub(156, 139, 102);
    glVertex2f(0.8,-0.5);
    glVertex2f(0.82,-0.5);
    glVertex2f(0.82,0.05);
    glVertex2f(0.8,0.05);
    glEnd();
///left side start muktomoncho
    glBegin(GL_TRIANGLES);
    glColor3ub(100, 0, 43);
    glVertex2f(0.65,-0.15);
    glVertex2f(0.60,-0.15);
    glVertex2f(0.80,-0.25);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(100,100,100);
    glVertex2f(0.65,-0.15);
    glVertex2f(0.70,-0.15);
    glVertex2f(0.80,-0.25);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(160,0,100);
    glVertex2f(0.70,-0.15);
    glVertex2f(0.75,-0.15);
    glVertex2f(0.80,-0.25);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(160,0,500);
    glVertex2f(0.80,-0.15);
    glVertex2f(0.75,-0.15);
    glVertex2f(0.80,-0.25);
    glEnd();/// left side muktomoncho

/// left rope
    glBegin(GL_LINES);
    glColor3ub(156, 139, 102);
    glVertex2f(0.75,-0.15);
    glVertex2f(0.80,0.01);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(156, 139, 102);
    glVertex2f(0.70,-0.15);
    glVertex2f(0.80,0.01);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(156, 139, 102);
    glVertex2f(0.65,-0.15);
    glVertex2f(0.80,0.01);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(156, 139, 102);
    glVertex2f(0.61,-0.15);
    glVertex2f(0.80,0.01);
    glEnd();///Right side rope muktomoncho

/// Right side
    glBegin(GL_TRIANGLES);
    glColor3ub(160,0,500);
    glVertex2f(0.82,-0.25);
    glVertex2f(0.82,-0.15);
    glVertex2f(0.87,-0.15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(160,0,100);
    glVertex2f(0.82,-0.25);
    glVertex2f(0.87,-0.15);
    glVertex2f(0.92,-0.15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(100,100,100);
    glVertex2f(0.82,-0.25);
    glVertex2f(0.92,-0.15);
    glVertex2f(0.97,-0.15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(100, 0, 43);
    glVertex2f(0.82,-0.25);
    glVertex2f(0.97,-0.15);
    glVertex2f(1.02,-0.15);
    glEnd();/// finish Right side
/// right rope
    glBegin(GL_LINES);
    glColor3ub(156, 139, 102);
    glVertex2f(1.01,-0.15);
    glVertex2f(0.82,0.01);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(156, 139, 102);
    glVertex2f(0.97,-0.15);
    glVertex2f(0.82,0.01);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(156, 139, 102);
    glVertex2f(0.92,-0.15);
   glVertex2f(0.82,0.01);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(156, 139, 102);
    glVertex2f(0.87,-0.15);
    glVertex2f(0.82,0.01);
    glEnd();///Right side rope muktomoncho

    glLoadIdentity();

    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);


    ///Clouds1
    int j;

    GLfloat x=-0.6f;
    GLfloat y=0.66f;
    GLfloat radius =.05f;
    int triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-0.55f;
    y=0.71f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-0.54f;
    y=0.65f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    ///Clouds2
    x=-0.2f;
    y=0.81f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-0.15f;
    y=0.86f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();


    x=-0.14f;
    y=0.80f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();


    ///Clouds3
    x=0.65f;
    y=0.66f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=0.7f;
    y=0.71f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=0.7f;
    y=0.65f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(position2,position1, 0.0f);

    /// Rain line1
    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();


    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glLoadIdentity();
    glPopMatrix();

    glTranslatef(0,0.4,0);

    glPushMatrix();
    glTranslatef(position2,position1, 0.0f);


    /// Rain line2

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glLoadIdentity();
    glPopMatrix();


    glTranslatef(0,-0.4,0);

    glPushMatrix();
    glTranslatef(position2,position1, 0.0f);
    // Rain line3
    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();


    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glLoadIdentity();
    glPopMatrix();


    glTranslatef(0,-0.8,0);

    glPushMatrix();
    glTranslatef(position2,position1, 0.0f);
    // Rain line4
    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();


    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();
    glPopMatrix();

    ///private car


glLoadIdentity();
glPushMatrix();
glTranslatef(position4 ,0.0f, 0.0f);
glBegin(GL_POLYGON);//Private Car
    glColor3ub(18, 54, 128);
      glVertex2f(-0.95,-0.45);
    glVertex2f(-0.95,-0.58);
    glVertex2f(-0.46,-0.58);
     glVertex2f(-0.46,-0.49);
       glVertex2f(-0.52,-0.45);
     glEnd();

glBegin(GL_QUADS);
 glColor3ub(232, 23, 93);
 glVertex2f(-0.86,-0.45);
 glVertex2f(-0.79,-0.37);
 glVertex2f(-0.67,-0.37);
 glVertex2f(-0.59,-0.45);
 glEnd();
//glLoadIdentity();

GLfloat a=-0.84f; GLfloat b =-0.58f;GLfloat radi =0.05f;
triangleAmount = 20;
twicePi = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(a, b);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           a+ (radi * cos(j *  twicePi/ triangleAmount)),
   b + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();

GLfloat c=-0.57f; GLfloat d =-0.58f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(c, d);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           c+ (radi * cos(j *  twicePi/ triangleAmount)),
   d + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();

glPointSize(7);
glBegin(GL_POINTS);//private car light
 glColor3ub(237, 229, 185);
 glVertex2f(-0.46,-0.56);

glEnd();
    glBegin(GL_POINTS);//private car window
    glColor3ub(225, 225, 230);
    glVertex2f(-0.77,-0.41);
    glVertex2f(-0.69,-0.41);

glEnd();//Private Car end
glPopMatrix();


  ///plane

    glPushMatrix();

    glLoadIdentity();
    radi =0.05f;

    triangleAmount = 20;
    twicePi = 2.0f * PI;


    glPushMatrix();
    glTranslatef(position5,0.0f, 0.0f);
    glBegin(GL_QUADS);//Plane
    glColor3ub(20,97,23);//body
      glVertex2f(0.22,0.76);
      glVertex2f(0.62,0.76);

    glVertex2f(0.62,0.82);
    glVertex2f(0.28,0.82);
    glColor3ub(163,2,2);
         glVertex2f(0.6,0.82);//back body
         glVertex2f(0.62,0.76);
         glVertex2f(0.7,0.88);
       glVertex2f(0.66,0.88);

        glVertex2f(0.38,0.82);//wing1
        glVertex2f(0.46,0.9);
       glVertex2f(0.51,0.9);
         glVertex2f(0.43,0.82);

        glVertex2f(0.38,0.76);//wing2
        glVertex2f(0.44,0.64);
        glVertex2f(0.48,0.64);
        glVertex2f(0.42,0.76);
        glEnd();

    glBegin(GL_POINTS);//plane window
    glColor3ub(227, 212, 129);
    glVertex2f(0.3,0.79);
    glVertex2f(0.38,0.79);
    glVertex2f(0.46,0.79);
    glVertex2f(0.54,0.79);
glEnd();//End Plane
glPopMatrix();



        ///cargo


    glLoadIdentity();
    glPushMatrix();
    radi =0.05f;

triangleAmount = 20;
twicePi = 2.0f * PI;

glTranslatef(position5,0.0f, 0.0f);
  glBegin(GL_QUADS);           //Micro Car
 glColor3ub(97, 34, 110);
 glVertex2f(0.3,-0.7);
 glVertex2f(0.3,-0.85);
 glVertex2f(0.7,-0.85);
 glVertex2f(0.7,-0.7);
  glVertex2f(0.4,-0.64);
 glVertex2f(0.4,-0.7);
 glVertex2f(0.7,-0.7);
 glVertex2f(0.7,-0.64);
 glEnd();

glBegin(GL_QUADS);
 glColor3ub(148, 16, 146);
 glVertex2f(0.4,-0.6);
 glVertex2f(0.4,-0.7);
 glVertex2f(0.7,-0.7);
 glVertex2f(0.7,-0.6);
 glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(163, 193, 227);
glVertex2f(0.4,-0.6);
glVertex2f(0.3,-0.7);
glVertex2f(0.4,-0.7);

glEnd();
glPointSize(7);
glBegin(GL_POINTS);
 glColor3ub(247, 246, 218);
 glVertex2f(0.295,-0.82);

glEnd();

GLfloat r=0.4f; GLfloat s =-0.85f;

//int triangleAmount = 20;
//GLfloat twicePi = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(r, s);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           r+ (radi * cos(j *  twicePi/ triangleAmount)),
   s + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();

 x=0.6f;  y =-0.85f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(x, y);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           x+ (radi * cos(j *  twicePi/ triangleAmount)),
   y + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();
// glPointSize(30);
glBegin(GL_POINTS);//Micro window
 glColor3ub(227, 212, 129);
 glVertex2f(0.45,-0.65);
 glVertex2f(0.55,-0.65);
 glVertex2f(0.65,-0.65);
glEnd();//End Micro

glPopMatrix();



    glFlush ();

}

    /////////////day part finish/////
////////Night part start//////


void night() {
	glClearColor(1.0, 1.0, 1.0, 1.0); //BackgroundColor
    glClear(GL_COLOR_BUFFER_BIT);

    //Sky
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-1, -0.5);
    glVertex2f(1, -0.5);
    glVertex2f(1, 1);
    glVertex2f(-1, 1);
    glEnd();

    //Main Building
    glBegin(GL_QUADS);
    glColor3ub(164, 164, 164);
    glVertex2f(-0.32, -0.5);
    glVertex2f(0.6, -0.5);
    glVertex2f(0.6, 0.5);
    glVertex2f(-0.32, 0.5);
    glEnd();

    //left Main Building
    glBegin(GL_QUADS);
    glColor3ub(164, 164, 164);
    glVertex2f(-0.6, -0.5);
    glVertex2f(-0.32, -0.5);
    glVertex2f(-0.32, 0.5);
    glVertex2f(-0.6, 0.47);
    glEnd();

    //Left Side
    glBegin(GL_POLYGON);
    glColor3ub(86, 194, 245);
    glVertex2f(-0.59, -0.48);
    glVertex2f (-0.32,-0.48);
    glVertex2f (-0.32,0.18);
    glVertex2f (-0.4,0.17);
    glVertex2f (-0.4,0.47);
    glVertex2f(-0.59, 0.45);
    glEnd();

    //Middle Side1
    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(-0.15,0.42);
    glVertex2f(0.54,0.42);
    glVertex2f(0.54,0.48);
    glVertex2f(-0.15,0.48);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(-0.15,0.42);
    glVertex2f(0.54,0.42);
    glVertex2f(0.54,0.48);
    glVertex2f(-0.15,0.48);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(-0.15,0.42);
    glVertex2f(0.54,0.42);
    glVertex2f(0.54,0.48);
    glVertex2f(-0.15,0.48);
    glEnd();


    glLoadIdentity();


    glBegin(GL_QUADS);
    glColor3ub(86, 194, 245);
    glVertex2f(-0.28,0.12);
    glVertex2f(0.54,0.12);
    glVertex2f(0.54,0.18);
    glVertex2f(-0.28,0.18);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(86, 194, 245);
    glVertex2f(-0.28,0.12);
    glVertex2f(0.54,0.12);
    glVertex2f(0.54,0.18);
    glVertex2f(-0.28,0.18);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(86, 194, 245);
    glVertex2f(-0.28,0.12);
    glVertex2f(0.54,0.12);
    glVertex2f(0.54,0.18);
    glVertex2f(-0.28,0.18);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(86, 194, 245);
    glVertex2f(-0.28,0.12);
    glVertex2f(0.54,0.12);
    glVertex2f(0.54,0.18);
    glVertex2f(-0.28,0.18);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(86, 194, 245);
    glVertex2f(-0.28,0.12);
    glVertex2f(0.54,0.12);
    glVertex2f(0.54,0.18);
    glVertex2f(-0.28,0.18);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(86, 194, 245);
    glVertex2f(-0.28,0.12);
    glVertex2f(0.54,0.12);
    glVertex2f(0.54,0.18);
    glVertex2f(-0.28,0.18);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(86, 194, 245);
    glVertex2f(-0.28,0.12);
    glVertex2f(0.54,0.12);
    glVertex2f(0.54,0.18);
    glVertex2f(-0.28,0.18);
    glEnd();

    glLoadIdentity();

    //Right Side
    glBegin(GL_QUADS);
    glColor3ub(178, 181, 182);
    glVertex2f(0.6,-0.47);
    glVertex2f(0.68,-0.47);
    glVertex2f(0.68,0.45);
    glVertex2f(0.6,0.45);
    glEnd();

    //Right Quads
    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(0.61,0.35);
    glVertex2f(0.67,0.35);
    glVertex2f(0.67,0.43);
    glVertex2f(0.61,0.43);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(0.61,0.35);
    glVertex2f(0.67,0.35);
    glVertex2f(0.67,0.43);
    glVertex2f(0.61,0.43);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(0.61,0.35);
    glVertex2f(0.67,0.35);
    glVertex2f(0.67,0.43);
    glVertex2f(0.61,0.43);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(0.61,0.35);
    glVertex2f(0.67,0.35);
    glVertex2f(0.67,0.43);
    glVertex2f(0.61,0.43);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(0.61,0.35);
    glVertex2f(0.67,0.35);
    glVertex2f(0.67,0.43);
    glVertex2f(0.61,0.43);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(0.61,0.35);
    glVertex2f(0.67,0.35);
    glVertex2f(0.67,0.43);
    glVertex2f(0.61,0.43);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(0.61,0.35);
    glVertex2f(0.67,0.35);
    glVertex2f(0.67,0.43);
    glVertex2f(0.61,0.43);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(0.61,0.35);
    glVertex2f(0.67,0.35);
    glVertex2f(0.67,0.43);
    glVertex2f(0.61,0.43);
    glEnd();

    glTranslatef(0,-.1,0);

    glBegin(GL_QUADS);
    glColor3ub(57, 60, 61);
    glVertex2f(0.61,0.35);
    glVertex2f(0.67,0.35);
    glVertex2f(0.67,0.43);
    glVertex2f(0.61,0.43);
    glEnd();


    glLoadIdentity();

    //front floor
    glBegin(GL_QUADS);
    glColor3ub(119, 123, 124);
    glVertex2f(-1, -1);
    glVertex2f(1, -1);
    glVertex2f(1, -0.5);
    glVertex2f(-1, -0.5);
    glEnd();

    //road side
    glBegin(GL_QUADS);
    glColor3ub(218, 208, 0);
    glVertex2f(-1, -0.55);
    glVertex2f(1, -0.55);
    glVertex2f(1, -0.5);
    glVertex2f(-1, -0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(218, 208, 0);
    glVertex2f(-1, -1);
    glVertex2f(1, -1);
    glVertex2f(1, -0.95);
    glVertex2f(-1, -0.95);
    glEnd();

    //Cross
    glBegin(GL_QUADS);
    glColor3ub(222, 222, 222);
    glVertex2f(-0.28,-0.59);
    glVertex2f(0,-0.59);
    glVertex2f(0,-0.57);
    glVertex2f(-0.28,-0.57);
    glEnd();

    glTranslatef(0,-.08,0);

    glBegin(GL_QUADS);
    glColor3ub(222, 222, 222);
    glVertex2f(-0.28,-0.59);
    glVertex2f(0,-0.59);
    glVertex2f(0,-0.57);
    glVertex2f(-0.28,-0.57);
    glEnd();

    glTranslatef(0,-.08,0);

    glBegin(GL_QUADS);
    glColor3ub(222, 222, 222);
    glVertex2f(-0.28,-0.59);
    glVertex2f(0,-0.59);
    glVertex2f(0,-0.57);
    glVertex2f(-0.28,-0.57);
    glEnd();

    glTranslatef(0,-.08,0);

    glBegin(GL_QUADS);
    glColor3ub(222, 222, 222);
    glVertex2f(-0.28,-0.59);
    glVertex2f(0,-0.59);
    glVertex2f(0,-0.57);
    glVertex2f(-0.28,-0.57);
    glEnd();

    glTranslatef(0,-.08,0);

    glBegin(GL_QUADS);
    glColor3ub(222, 222, 222);
    glVertex2f(-0.28,-0.59);
    glVertex2f(0,-0.59);
    glVertex2f(0,-0.57);
    glVertex2f(-0.28,-0.57);
    glEnd();

    glLoadIdentity();

    //devider
    glBegin(GL_QUADS);
    glColor3ub(218, 208, 0);
    glVertex2f(-0.78,-0.75);
    glVertex2f(-0.50,-0.75);
    glVertex2f(-0.50,-0.73);
    glVertex2f(-0.78,-0.73);
    glEnd();

    glTranslatef(0.9,0,0);

    glBegin(GL_QUADS);
    glColor3ub(218, 208, 0);
    glVertex2f(-0.78,-0.75);
    glVertex2f(-0.50,-0.75);
    glVertex2f(-0.50,-0.73);
    glVertex2f(-0.78,-0.73);
    glEnd();

    glTranslatef(0.8,0,0);

    glBegin(GL_QUADS);
    glColor3ub(218, 208, 0);
    glVertex2f(-0.78,-0.75);
    glVertex2f(-0.50,-0.75);
    glVertex2f(-0.50,-0.73);
    glVertex2f(-0.78,-0.73);
    glEnd();

    glLoadIdentity();

   ///Tree Right
    glBegin(GL_QUADS);
    glColor3ub(156, 139, 102);
    glVertex2f(0.8,-0.5);
    glVertex2f(0.85,-0.5);
    glVertex2f(0.85,-0.25);
    glVertex2f(0.8,-0.25);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(35, 174, 43);
    glVertex2f(0.75,-0.25);
    glVertex2f(0.9,-0.25);
    glVertex2f(0.825,-0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(36, 211, 47);
    glVertex2f(0.75,-0.2);
    glVertex2f(0.9,-0.2);
    glVertex2f(0.825,-0.05);
    glEnd();




    ///muktomoncho left
    glTranslatef(-1.6,0,0);
/// stick for muktomoncho
    glBegin(GL_QUADS);
    glColor3ub(156, 139, 102);
    glVertex2f(0.8,-0.5);
    glVertex2f(0.82,-0.5);
    glVertex2f(0.82,0.05);
    glVertex2f(0.8,0.05);
    glEnd();
///left side start muktomoncho
    glBegin(GL_TRIANGLES);
    glColor3ub(100, 0, 43);
    glVertex2f(0.65,-0.15);
    glVertex2f(0.60,-0.15);
    glVertex2f(0.80,-0.25);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(100,100,100);
    glVertex2f(0.65,-0.15);
    glVertex2f(0.70,-0.15);
    glVertex2f(0.80,-0.25);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(160,0,100);
    glVertex2f(0.70,-0.15);
    glVertex2f(0.75,-0.15);
    glVertex2f(0.80,-0.25);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(160,0,500);
    glVertex2f(0.80,-0.15);
    glVertex2f(0.75,-0.15);
    glVertex2f(0.80,-0.25);
    glEnd();/// left side muktomoncho

/// left rope
    glBegin(GL_LINES);
    glColor3ub(156, 139, 102);
    glVertex2f(0.75,-0.15);
    glVertex2f(0.80,0.01);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(156, 139, 102);
    glVertex2f(0.70,-0.15);
    glVertex2f(0.80,0.01);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(156, 139, 102);
    glVertex2f(0.65,-0.15);
    glVertex2f(0.80,0.01);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(156, 139, 102);
    glVertex2f(0.61,-0.15);
    glVertex2f(0.80,0.01);
    glEnd();///Right side rope muktomoncho

/// Right side
    glBegin(GL_TRIANGLES);
    glColor3ub(160,0,500);
    glVertex2f(0.82,-0.25);
    glVertex2f(0.82,-0.15);
    glVertex2f(0.87,-0.15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(160,0,100);
    glVertex2f(0.82,-0.25);
    glVertex2f(0.87,-0.15);
    glVertex2f(0.92,-0.15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(100,100,100);
    glVertex2f(0.82,-0.25);
    glVertex2f(0.92,-0.15);
    glVertex2f(0.97,-0.15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(100, 0, 43);
    glVertex2f(0.82,-0.25);
    glVertex2f(0.97,-0.15);
    glVertex2f(1.02,-0.15);
    glEnd();/// finish Right side
/// right rope
    glBegin(GL_LINES);
    glColor3ub(156, 139, 102);
    glVertex2f(1.01,-0.15);
    glVertex2f(0.82,0.01);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(156, 139, 102);
    glVertex2f(0.97,-0.15);
    glVertex2f(0.82,0.01);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(156, 139, 102);
    glVertex2f(0.92,-0.15);
   glVertex2f(0.82,0.01);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(156, 139, 102);
    glVertex2f(0.87,-0.15);
    glVertex2f(0.82,0.01);
    glEnd();///Right side rope muktomoncho

    glLoadIdentity();

    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    ///Clouds1
    int j;

    GLfloat x=-0.6f;
    GLfloat y=0.66f;
    GLfloat radius =.05f;
    int triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-0.55f;
    y=0.71f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-0.54f;
    y=0.65f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    ///Clouds2
    x=-0.2f;
    y=0.81f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-0.15f;
    y=0.86f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();


    x=-0.14f;
    y=0.80f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();


    ///Clouds3
    x=0.65f;
    y=0.66f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=0.7f;
    y=0.71f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=0.7f;
    y=0.65f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    glPopMatrix();


    ///moon

    glPushMatrix();
    glTranslatef(.02,1.5,0);
    GLfloat a=-0.4f; GLfloat b =-0.58f;GLfloat radi =0.05f;
    triangleAmount = 100;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(1000,1000,1000);
    glVertex2f(a, b);
    for(j = 0; j <= triangleAmount;j++) {
    glVertex2f(
           a+ (radi * cos(j *  twicePi/ triangleAmount)),
            b + (radi * sin(j * twicePi / triangleAmount))
        );
}
glEnd();
    glPopMatrix();

    /// Rain line1

    glPushMatrix();
    glTranslatef(position2,position1, 0.0f);
    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();


    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glLoadIdentity();
    glPopMatrix();

    glTranslatef(0,0.4,0);

    glPushMatrix();
    glTranslatef(position2,position1, 0.0f);
    // Rain line2
    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glLoadIdentity();
    glPopMatrix();


    glTranslatef(0,-0.4,0);

    glPushMatrix();
    glTranslatef(position2,position1, 0.0f);
    // Rain line3
    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();


    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glLoadIdentity();
    glPopMatrix();


    glTranslatef(0,-0.8,0);

    glPushMatrix();
    glTranslatef(position2,position1, 0.0f);
    /// Rain line4
    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(-.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();


    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,-0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();

    glTranslatef(.2,0.1,0);

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-0.4,0.47);
    glVertex2f (-0.35,0.28);
    glEnd();
    glPopMatrix();

    ///private car


glLoadIdentity();
glPushMatrix();
glTranslatef(position4 ,0.0f, 0.0f);
glBegin(GL_POLYGON);//Private Car
    glColor3ub(18, 54, 128);
      glVertex2f(-0.95,-0.45);
    glVertex2f(-0.95,-0.58);
    glVertex2f(-0.46,-0.58);
     glVertex2f(-0.46,-0.49);
       glVertex2f(-0.52,-0.45);
     glEnd();

glBegin(GL_QUADS);
 glColor3ub(232, 23, 93);
 glVertex2f(-0.86,-0.45);
 glVertex2f(-0.79,-0.37);
 glVertex2f(-0.67,-0.37);
 glVertex2f(-0.59,-0.45);
 glEnd();
//glLoadIdentity();

 a=-0.84f; b =-0.58f; radi =0.05f;
triangleAmount = 20;
twicePi = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(a, b);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           a+ (radi * cos(j *  twicePi/ triangleAmount)),
   b + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();

GLfloat c=-0.57f; GLfloat d =-0.58f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(c, d);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           c+ (radi * cos(j *  twicePi/ triangleAmount)),
   d + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();

glPointSize(7);
glBegin(GL_POINTS);//private car light
 glColor3ub(237, 229, 185);
 glVertex2f(-0.46,-0.56);

glEnd();
    glBegin(GL_POINTS);//private car window
    glColor3ub(225, 225, 230);
    glVertex2f(-0.77,-0.41);
    glVertex2f(-0.69,-0.41);

glEnd();//Private Car end
glPopMatrix();

  ///plane

glPushMatrix();

 glLoadIdentity();
radi =0.05f;

triangleAmount = 20;
twicePi = 2.0f * PI;


glPushMatrix();
glTranslatef(position5,0.0f, 0.0f);
glBegin(GL_QUADS);//Plane
    glColor3ub(20,97,23);//body
      glVertex2f(0.22,0.76);
      glVertex2f(0.62,0.76);

    glVertex2f(0.62,0.82);
    glVertex2f(0.28,0.82);
glColor3ub(163,2,2);
         glVertex2f(0.6,0.82);//back body
         glVertex2f(0.62,0.76);
         glVertex2f(0.7,0.88);
       glVertex2f(0.66,0.88);

        glVertex2f(0.38,0.82);//wing1
        glVertex2f(0.46,0.9);
       glVertex2f(0.51,0.9);
         glVertex2f(0.43,0.82);

      glVertex2f(0.38,0.76);//wing2
        glVertex2f(0.44,0.64);
       glVertex2f(0.48,0.64);
         glVertex2f(0.42,0.76);

     glEnd();

glBegin(GL_POINTS);//plane window
 glColor3ub(227, 212, 129);
  glVertex2f(0.3,0.79);
 glVertex2f(0.38,0.79);
 glVertex2f(0.46,0.79);
 glVertex2f(0.54,0.79);

glEnd();//End Plane
glPopMatrix();


        ///cargo

 glLoadIdentity();
glPushMatrix();
 radi =0.05f;

triangleAmount = 20;
twicePi = 2.0f * PI;

glTranslatef(position5,0.0f, 0.0f);
  glBegin(GL_QUADS);           //Micro Car
 glColor3ub(97, 34, 110);
 glVertex2f(0.3,-0.7);
 glVertex2f(0.3,-0.85);
 glVertex2f(0.7,-0.85);
 glVertex2f(0.7,-0.7);
  glVertex2f(0.4,-0.64);
 glVertex2f(0.4,-0.7);
 glVertex2f(0.7,-0.7);
 glVertex2f(0.7,-0.64);
 glEnd();

glBegin(GL_QUADS);
 glColor3ub(148, 16, 146);
 glVertex2f(0.4,-0.6);
 glVertex2f(0.4,-0.7);
 glVertex2f(0.7,-0.7);
 glVertex2f(0.7,-0.6);
 glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(163, 193, 227);
glVertex2f(0.4,-0.6);
glVertex2f(0.3,-0.7);
glVertex2f(0.4,-0.7);

glEnd();
glPointSize(7);
glBegin(GL_POINTS);
 glColor3ub(247, 246, 218);
 glVertex2f(0.295,-0.82);

glEnd();

GLfloat r=0.4f; GLfloat s =-0.85f;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(r, s);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           r+ (radi * cos(j *  twicePi/ triangleAmount)),
   s + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();

 x=0.6f;  y =-0.85f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(x, y);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           x+ (radi * cos(j *  twicePi/ triangleAmount)),
   y + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();

glBegin(GL_POINTS);//Micro window
 glColor3ub(227, 212, 129);
 glVertex2f(0.45,-0.65);
 glVertex2f(0.55,-0.65);
 glVertex2f(0.65,-0.65);
glEnd();//End Micro

glPopMatrix();

    glFlush ();

}


int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutCreateWindow("AIUB Campus View");
	glutInitWindowSize(1920,1080);
	//glutDisplayFunc(day);
	glutDisplayFunc(night);

    glutSpecialFunc(SpecialInput);

    glutIdleFunc(Idle);
    glutTimerFunc(100, update, 0);

    //sndPlaySound("rain-07.wav",SND_ASYNC);
   // PlaySound(TEXT("rain-07.wav,airplane-01.wav"),NULL,SND_SYNC);
    glutMainLoop();
	return 0;
}
