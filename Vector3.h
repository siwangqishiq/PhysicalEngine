#ifndef _Vector3_h_
#define _Vector3_h_
#include "common.h"
#include <stdio.h>

//ÈýÎ¬ÏòÁ¿
struct _Vector3
{
	real x;
	real y;
	real z;
};
typedef struct _Vector3 Vector3;

int createVector3(real x,real y,real z,Vector3 **pVector);
void freeVector3(Vector3 *pVec);
void printVector3(Vector3 *pVec);
void invert(Vector3 *pVec);

#endif