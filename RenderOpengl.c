#include "RenderOpengl.h"

//��(x,y)�㴦  ������ɫcolor
void drawPoint(float x, float y, const Color color)
{
	//glPointSize(8.0);���õ�Ĵ�С
	glColor3f(color.r / 255, color.g / 255, color.b / 255);//ָ�������ɫ
	//����Opengl����
	x = 2 * x / WIDTH - 1;
	y = 2 * y / HEIGHT - 1;
	glBegin(GL_POINTS);//��ʼ����
	glVertex3f(x, y, 0); //���Ƶ�
	glEnd();//��������
}

//��ֱ��
void drawLine(float x1, float y1, float x2, float y2, const Color color)
{
	x1 = 2 * x1 / WIDTH - 1;
	y1 = 2 * y1 / HEIGHT - 1;

	x2 = 2 * x2 / WIDTH - 1;
	y2 = 2 * y2 / HEIGHT - 1;

	glColor3f(color.r / 255, color.g / 255, color.b / 255);//ָ����ɫ
	glBegin(GL_LINES);
	glVertex3f(x1, y1, 0.0f);
	glVertex3f(x2, y2, 0.0f);
	glEnd();
}


