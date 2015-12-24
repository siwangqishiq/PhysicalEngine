#include "RenderOpengl.h"
#include <math.h>
#include <stdio.h>

//在(x,y)点处  绘制颜色color
void drawPoint(float x, float y, const Color color)
{
	//glPointSize(8.0);设置点的大小
	glColor3f(color.r / 255, color.g / 255, color.b / 255);//指定点的颜色
	//计算Opengl坐标
	x = 2 * x / WIDTH - 1;
	y = 2 * y / HEIGHT - 1;
	glBegin(GL_POINTS);//开始画点
	glVertex3f(x, y, 0); //绘制点
	glEnd();//结束画点
}

//画直线
void drawLine(float x1, float y1, float x2, float y2, const Color color)
{
	x1 = 2 * x1 / WIDTH - 1;
	y1 = 2 * y1 / HEIGHT - 1;

	x2 = 2 * x2 / WIDTH - 1;
	y2 = 2 * y2 / HEIGHT - 1;

	glColor3f(color.r / 255, color.g / 255, color.b / 255);//指定颜色
	glBegin(GL_LINES);
	glVertex3f(x1, y1, 0.0f);
	glVertex3f(x2, y2, 0.0f);
	glEnd();
}

//绘制矩形
void drawRect(float x,float y,float width,float height,const Color color)
{
	 drawLine(x,y,x+width,y,color);
	 drawLine(x+width,y,x+width,y+height,color);
	 drawLine(x+width,y+height,x,y+height,color);
	 drawLine(x,y+height,x,y,color);
}

//绘制圆形
void drawCircle(float x,float y,float radius,const Color color)
{
	  int n;
	  float rx = 2*radius/WIDTH;
	  float ry = 2*radius / HEIGHT;
	  x = 2 * x / WIDTH - 1;
	  y = 2 * y / HEIGHT - 1;
	
	  glColor3f(color.r / 255, color.g / 255, color.b / 255);//指定点的颜色
	  glBegin(GL_TRIANGLE_FAN);
      glVertex3f(x, y, 0);
      for(n = 0; n <= 32; ++n ) 
	  {
			float const t = 2 * PI * (float)n / (float)32;
            glVertex3f(x + sinf(t) * rx, y + cosf(t) * ry, 0);
      }
      glEnd();
}

//绘制多边形
void drawPolygon(float x[],float  y[],int size,const Color color)
{
	int i;
	for(i = 0;i < size ; i++)
	{
		int j = (i+1) % size ; 
		drawLine( x[i], y[i], x[j], y[j],color);
	}//end for i
}


