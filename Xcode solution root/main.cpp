#include "cubeSimple.h"

#if defined(__APPLE__) || defined(MACOSX)
    #include <GLUT/glut.h>
#else
    #include <GL/glut.h>
#endif


int main(int argc, char **argv)
{
	glutInit(&argc, argv); // Initialize GLUT

	glutInitDisplayMode(GLUT_DOUBLE); // Set up a basic display buffer (now double buffered)
	glutInitWindowSize(500, 500); // Set the width and height of the window
	glutInitWindowPosition(100, 100); // Set the position of the window

	glutCreateWindow("Your first OpenGL Window"); // Set the title for the window

	glutDisplayFunc(display); // Tell GLUT to use the method "display" for rendering

	glutIdleFunc(display); // Tell GLUT to use the method "display" as our idle method as well

	glutReshapeFunc(reshape); // Tell GLUT to use the method "reshape" for reshaping

	glutKeyboardFunc(keyPressed); // Tell GLUT to use the method "keyPressed" for key presses
	glutKeyboardUpFunc(keyUp); // Tell GLUT to use the method "keyUp" for key up events

	glutMainLoop(); // Enter GLUT's main loop
}