#include <stdio.h>
#include <time.h>  
#include "Vector3.h"
#include "RenderOpengl.h"

long lastTime = 0;

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

Color color = {0,0,0};
void drawWave();

void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//TODO update
	drawPoint(300,400,color);
	drawLine(300,400,400,500,color);

	drawWave();

	glutSwapBuffers();
	glutPostRedisplay();
}

void drawWave()
{
	float x,y;
	for(x = 0;x < 2*314.15926;x+=0.01)
	{
		y = 200*sinf(x/50)+400;
		drawPoint(x,y,color);
	}
}

//处理键盘输入 key按键
// x y  当前鼠标坐标点
void handleKeyInput(unsigned char key, int x, int y)
{
	if (key == 27){//
		exit(0);
	}
	//printf("%d     %d   %d\n", key, x, y);
}

int main(int argc,char **argv)
{
	testVector();
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(WIDTH, HEIGHT);
	glutInitWindowPosition(400, 200);
	glutCreateWindow("Render Window");
	glutDisplayFunc(display);
	glutKeyboardFunc(handleKeyInput);
	init();
	glutMainLoop();
	return 0;
}