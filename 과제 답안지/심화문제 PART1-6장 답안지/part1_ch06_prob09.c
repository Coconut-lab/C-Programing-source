#include <stdio.h>

int main(void)
{
	double height, val;
	printf("���л� A�� Ű�� �Է��ϼ���:");
	scanf("%lf",&height);

	val = (height - 100) * 0.9;

	printf("���л� A�� ǥ�� ü���� %.2lf�Դϴ�.\n", val);

	return 0;
}