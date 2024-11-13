#include <stdio.h>

int main(void)
{
	char a;
	int b;
	double c;

	char* cp = NULL;
	int* ip = NULL;
	double* dp = NULL;

	cp = &a;
	ip = &b;
	dp = &c;

	*cp = 'A';
	*ip = 10;
	*dp = 3.14;

	printf("char형 포인터의 크기: %d, char형 변수의 크기: %d, char형 변수값: %c\n", sizeof(cp), sizeof(char), a);
	printf("int형 포인터의 크기: %d, int형 변수의 크기: %d, int형 변수값: %d\n", sizeof(ip), sizeof(int), b);
	printf("double형 포인터의 크기: %d, double형 변수의 크기: %d, double형 변수값: %lf\n", sizeof(dp), sizeof(double), c);

	return 0;
}