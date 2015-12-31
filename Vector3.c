#include "Vector3.h"

//创建向量
int createVector3(real x,real y,real z,Vector3 **pVector)
{
	Vector3 *p = (Vector3 *)malloc(sizeof(Vector3));
	if(p == NULL)
	{
		return ERROR;
	}
	p->x = x;
	p->y = y;
	p->z = z;

	*pVector = p;
	return OK;
}

//调试时打印向量值
void printVector3(Vector3 *pVec)
{
	printf("[%5f  ,%5f  ,%5f]\n",pVec->x,pVec->y,pVec->z);
}

//向量元素取反
void invert(Vector3 *pVec)
{
	pVec->x *=-1;
	pVec->y *=-1;
	pVec->z *=-1;
}

//释放向量资源
void freeVector3(Vector3 *pVec)
{
	if(pVec != NULL)
	{
		free(pVec);
	}
}

//计算向量长度
real magnitude(Vector3 *pVec)
{
	return sqrtf(squareMagnitude(pVec));
}

//计算向量长度平方
real squareMagnitude(Vector3 *pVec)
{
	return pVec->x * pVec->x + pVec->y * pVec->y +pVec->z * pVec->z;
}
	
//讲向量标准化
void normalize(Vector3 *pVec)
{
	real len = magnitude(pVec);
	if(len > 0)
	{
		real lenD = 1/len;
		pVec->x  = lenD * (pVec->x);
		pVec->y  = lenD * (pVec->y);
		pVec->z  = lenD * (pVec->z);
	}//endif
}

//向量加法
void addVector(Vector3 *pVec,const Vector3 *pAddVec)
{
	pVec->x += pAddVec->x;
	pVec->y += pAddVec->y;
	pVec->z += pAddVec->z;
}

//向量减法
void subtractVector(Vector3 *pVec,const Vector3 *pSubVec)
{
	pVec->x -= pSubVec->x;
	pVec->y -= pSubVec->y;
	pVec->z -= pSubVec->z;
}

//向量叉乘
int crossMultiplyVectors(const Vector3 *pA,const Vector3 *pB,Vector3 *pResult)
{
	if(pResult == NULL)
		return ERROR;

	pResult->x = (pA->y) * (pB->z) - (pA->z) * (pB->y);
	pResult->y = (pA->z) * (pB->x) - (pA->x) * (pB->z);
	pResult->z = (pA->x) * (pB->y) - (pA->y) * (pB->x);

	return OK;
}

//向量点乘
//return 点乘结果
real dotMultiplyVectors(const Vector3 *pA,const Vector3 *pB)
{
	return (pA->x)*(pB->x) + (pA->y)*(pB->y) + (pA->z)*(pB->z);
}

