#include <stdio.h>

int main()
{
	int num;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);

	printf("%d\n", num & 0x01);

	return 0;
}