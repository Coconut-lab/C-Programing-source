#include <stdio.h>
#define PI 3.14

void area(double*);

int main(void)
{
	void* vp = NULL;
	double r;

	(double*)vp = &r;

	printf("������ �Է�: ");
	scanf("%lf", vp);

	area(vp);

	return 0;
}

void area(double* dp)
{
	double result;
	result = PI*(*dp)*(*dp);
	printf("���� ����: %.2lf\n", result);
}