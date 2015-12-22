#include <stdio.h>
#include "Vector3.h"

int main()
{
	Vector3 *pVec;

	createVector3(1,2,3,&pVec);

	printVector3(pVec);
	invert(pVec);
	printVector3(pVec);

	freeVector3(pVec);
	return 0;
}