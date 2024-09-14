/* -------------------------8<---------------------------------------------- */
/*                                                                       .|  */
/* main.cpp                                    /   (__)          |/          */
/*                                                 (oo)------/'   ,__,    ,  */
/* By: phipno <phipno@gmail.com>                |  (__)     ||    (oo)_____/ */
/*                                                    ||---/||    (__)    || */
/* Created: 2024/09/14 14:20 by phipno       |/                 ,    ||--w|| */
/*                                         ,,       !              |'        */
/*                                              ,           ,|             | */
/* -----[ mooooooo ]-------------------------------------------------------- */

#include <GL/glut.h>
/*
  This line includes the GLUT (OpenGL Utility Toolkit) library.
  It provides functions to create windows, handle input, and control
  the display in an OpenGL program.
  This is essential to build cross-platform OpenGL applications.
*/

/*
  This declares the display() function. 
  This function will be called whenever the window needs to be redrawn, 
  which is what happens in every frame of an OpenGL program.
*/
void display()
{
  //clears the screen
  glClear(GL_COLOR_BUFFER_BIT);

  /*
    This tells OpenGL that we are about to start defining a set of triangles. 
    Every three vertices (points) specified between 
    glBegin() and glEnd() will form a triangle.
    GL_TRIANGLES is a mode that tells OpenGL to interpret the vertices as triangles.
  */
  glBegin(GL_TRIANGLES);
  glVertex2f(-0.5f, -0.5f);
  glVertex2f(0.5f, -0.5f);
  glVertex2f(0.0f, 0.5f);
  glEnd();

  /*
    This ensures that all OpenGL commands are executed as quickly as possible. 
    Since OpenGL is highly parallel, this function forces the commands 
    to be sent to the GPU and displayed immediately. 
    It’s often used when single buffering (drawing directly to the screen) 
    to ensure the drawn content appears.*/
  glFlush();
}

int main(int argc, char **argv)
{
  /*
    This initializes the GLUT library. It processes any command-line arguments 
    related to display options (like fullscreen or screen resolutions). 
    It must be called before any other GLUT function.
  */
  glutInit(&argc, argv);

  //creates a window with a name and sets its size
  glutCreateWindow("OpenGL Setup Test");
  glutInitWindowSize(320, 320);

  /*
    This tells GLUT to use the display() function we defined earlier 
    whenever the window needs to be redrawn. 
    The display() function will be called every time the frame needs updating,
    such as when the window is resized or exposed.
  */
  glutDisplayFunc(display);

  /*
    This starts the GLUT event processing loop. It waits for user input 
    (like closing the window or resizing) and updates the display when necessary. 
    The program will run continuously until the user closes the window.
  */
  glutMainLoop();
  return 0;
}
