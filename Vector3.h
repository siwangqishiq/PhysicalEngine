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

//������ά����
int createVector3(real x,real y,real z,Vector3 **pVector);//����

//�ͷ���Դ
void freeVector3(Vector3 *pVec);//

//��ӡ��ֵdebug
void printVector3(Vector3 *pVec);//

////ȡ��
void invert(Vector3 *pVec);

//������������
real magnitude(Vector3 *pVec);

//������������ƽ��
real squareMagnitude(Vector3 *pVec);

//������׼��
void normalize(Vector3 *pVec);

//�����ӷ�
void addVector(Vector3 *pVec,const Vector3 *pAddVec);

//��������
void subtractVector(Vector3 *pVec,const Vector3 *pSubVec);

//�������
//pResult   ���֮��Ľ�� �����pResultָ��ָ���λ��
int crossMultiplyVectors(const Vector3 *pVec1,const Vector3 *pVec2,Vector3 *pResult);

//�������
// params Vector3 a ,b
//return ��˽��
real dotMultiplyVectors(const Vector3 *pA,const Vector3 *pB);

#endif