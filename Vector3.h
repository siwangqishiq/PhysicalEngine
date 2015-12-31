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

//创建三维向量
int createVector3(real x,real y,real z,Vector3 **pVector);//创建

//释放资源
void freeVector3(Vector3 *pVec);//

//打印数值debug
void printVector3(Vector3 *pVec);//

////取反
void invert(Vector3 *pVec);

//计算向量长度
real magnitude(Vector3 *pVec);

//计算向量长度平方
real squareMagnitude(Vector3 *pVec);

//向量标准化
void normalize(Vector3 *pVec);

//向量加法
void addVector(Vector3 *pVec,const Vector3 *pAddVec);

//向量减法
void subtractVector(Vector3 *pVec,const Vector3 *pSubVec);

//向量叉乘
//pResult   叉乘之后的结果 存放于pResult指针指向的位置
int crossMultiplyVectors(const Vector3 *pVec1,const Vector3 *pVec2,Vector3 *pResult);

//向量点乘
// params Vector3 a ,b
//return 点乘结果
real dotMultiplyVectors(const Vector3 *pA,const Vector3 *pB);

#endif