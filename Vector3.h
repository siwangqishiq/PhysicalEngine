#ifndef _Vector3_h_
#define _Vector3_h_
#include "common.h"
#include <stdio.h>
#include <math.h>

//��ά����
struct _Vector3
{
	real x;
	real y;
	real z;
};
typedef struct _Vector3 Vector3;

int createVector3(real x,real y,real z,Vector3 **pVector);//����
void freeVector3(Vector3 *pVec);//�ͷ���Դ
void printVector3(Vector3 *pVec);//��ӡ��ֵ
void invert(Vector3 *pVec);//ȡ��
real magnitude(Vector3 *pVec);//������������
real squareMagnitude(Vector3 *pVec);//������������ƽ��
void normalize(Vector3 *pVec);//������׼��
#endif