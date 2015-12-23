#include <stdio.h>
#include <time.h>  
#include "Vector3.h"
#include "RenderOpengl.h"

void testVector()
{
	Vector3 *pVec;
	real len = 0;

	createVector3(1000,0,0,&pVec);

	printVector3(pVec);
	len = magnitude(pVec);
	printf("%10f\n",len);

	normalize(pVec);
	printVector3(pVec);
	freeVector3(pVec);
}

void init()
{
	 glClearColor(1,1,1,1);
}

int i = 0;
void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glutSwapBuffers();
	printf("%d\n",i++);
	glutPostRedisplay();
	//start_time=time(NULL);
}

int main(int argc,char **argv)
{
	testVector();
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(WIDTH, HEIGHT);
	glutCreateWindow("Render Window");
	glutDisplayFunc(display);
	init();
	glutMainLoop();
	return 0;
}