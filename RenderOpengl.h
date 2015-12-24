#ifndef _RenderOpengl_h_
#define _RenderOpengl_h_
#include <gl\glut.h>

#define WIDTH       600
#define HEIGHT      800

struct _Color{
	int r;
	int g;
	int b;
};
typedef struct _Color Color;
void drawPoint(float x, float y, const Color color);//��(x,y)�㴦  ������ɫcolor
void drawLine(float x1, float y1, float x2, float y2, const Color color);//��ֱ��
void drawRect(float left,float top,float width,float height,const Color color);//���ƾ���
void drawCircle(float x,float y,float radius,const Color color);//����Բ��

#endif