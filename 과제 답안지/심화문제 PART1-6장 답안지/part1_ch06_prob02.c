#include <stdio.h>

int main()
{
	int num;

	printf("���ڸ� �Է��ϼ��� (1~52) : ");
	scanf("%d", &num);

	num % 2 == 0 ? printf("���� %d �� %c �Դϴ�.\n", num, num / 2 + 64) : printf("���� %d �� %c �Դϴ�.\n", num, num / 2 + 97);

	return 0;
}