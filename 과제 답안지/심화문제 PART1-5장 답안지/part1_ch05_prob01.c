#include <stdio.h>

int main()
{
	int num, digit_ten, digit_unit;

	printf("���� �ڸ� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);

	digit_ten = num / 10;
	digit_unit = num % 10;

	printf("���� %d�� ���� �ڸ��� ���� �ڸ����� ���� %d�Դϴ�.\n", num, digit_ten + digit_unit);

	return 0;
}