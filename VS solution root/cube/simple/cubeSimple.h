#include <GL/glut.h> // Include the GLUT header file

#if defined(__APPLE__) || defined(MACOSX)
	#include <GLUT/glut.h>
#else
	#include <GL/glut.h>
#endif


void keyOperations(void);

void display(void);

void reshape(int width, int height);

void keyPressed(unsigned char key, int x, int y);

void keyUp(unsigned char key, int x, int y);