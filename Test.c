#include <stdio.h>
#include "Vector3.h"

int main()
{
	Vector3 *pVec;
	real len = 0;

	createVector3(1000,0,0,&pVec);

	printVector3(pVec);
	len = magnitude(pVec);
	printf("%10f\n",len);

	normalize(pVec);
	printVector3(pVec);
	freeVector3(pVec);

	return 0;
}