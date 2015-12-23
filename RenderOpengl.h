#ifndef _RenderOpengl_h_
#define _RenderOpengl_h_
#include <gl\glut.h>

#define WIDTH       600
#define HEIGHT      800

struct _Color{
	int r;
	int g;
	int b;
	int a;
};
typedef struct _Color Color;

void drawPoint(float x, float y, const Color color);//在(x,y)点处  绘制颜色color
void drawLine(float x1, float y1, float x2, float y2, const Color color);//画直线

#endif