#include <stdio.h>

int main(void)
{
	double wide, height;
	double result;

	printf("�簢���� ���� ���̸� �Է��ϼ���:");
	scanf("%lf", &wide);
	printf("�簢���� ���� ���̸� �Է��ϼ���:");
	scanf("%lf", &height);

	result = (wide * height);

	printf("���� %.2lf, ���� %.2lf�� �簢���� ���̴� \n%.2lf �Դϴ�. \n", wide, height, result);

	return 0;
}