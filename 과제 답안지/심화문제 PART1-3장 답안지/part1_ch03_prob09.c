#include <stdio.h>

int main(void)
{
	int r;
	double result1, result2;

	printf("���� �������� �Է��ϼ���. :");
	scanf("%d", &r);

	result1 = 3.14*r*r;
	result2 = 2 * 3.14*r;

	printf("���� ����: %.2lf \n", result1);
	printf("���� �ѷ�: %.2lf \n", result2);
	

	return 0;
}