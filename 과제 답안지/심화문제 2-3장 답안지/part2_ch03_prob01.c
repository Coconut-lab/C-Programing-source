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

	printf("char�� �������� ũ��: %d, char�� ������ ũ��: %d, char�� ������: %c\n", sizeof(cp), sizeof(char), a);
	printf("int�� �������� ũ��: %d, int�� ������ ũ��: %d, int�� ������: %d\n", sizeof(ip), sizeof(int), b);
	printf("double�� �������� ũ��: %d, double�� ������ ũ��: %d, double�� ������: %lf\n", sizeof(dp), sizeof(double), c);

	return 0;
}