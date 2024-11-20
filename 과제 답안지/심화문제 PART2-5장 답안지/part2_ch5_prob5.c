#include <stdio.h>
#define PI 3.14

void area(double*);

int main(void)
{
	void* vp = NULL;
	double r;

	(double*)vp = &r;

	printf("반지름 입력: ");
	scanf("%lf", vp);

	area(vp);

	return 0;
}

void area(double* dp)
{
	double result;
	result = PI*(*dp)*(*dp);
	printf("원의 넓이: %.2lf\n", result);
}