#include <stdio.h>

int main()
{
	int num;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);

	num % 2 ? printf("Ȧ���Դϴ�.\n") : printf("¦���Դϴ�.\n");

	return 0;
}