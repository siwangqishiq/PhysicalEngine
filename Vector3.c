#include "Vector3.h"

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
	return SUCCESS;
}

void printVector3(Vector3 *pVec)
{
	printf("[%5f  ,%5f  ,%5f]\n",pVec->x,pVec->y,pVec->z);
}

void invert(Vector3 *pVec)
{
	pVec->x *=-1;
	pVec->y *=-1;
	pVec->z *=-1;
}

void freeVector3(Vector3 *pVec)
{
	if(pVec != NULL)
	{
		free(pVec);
	}
}

