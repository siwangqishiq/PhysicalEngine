#ifndef _Vector3_h_
#define _Vector3_h_
#include "common.h"
#include <stdio.h>
#include <math.h>

//三维向量
struct _Vector3
{
	real x;
	real y;
	real z;
};
typedef struct _Vector3 Vector3;

int createVector3(real x,real y,real z,Vector3 **pVector);//创建
void freeVector3(Vector3 *pVec);//释放资源
void printVector3(Vector3 *pVec);//打印数值
void invert(Vector3 *pVec);//取反
real magnitude(Vector3 *pVec);//计算向量长度
real squareMagnitude(Vector3 *pVec);//计算向量长度平方
void normalize(Vector3 *pVec);//向量标准化
#endif