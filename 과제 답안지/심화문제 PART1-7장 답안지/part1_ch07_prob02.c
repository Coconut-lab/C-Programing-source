#include <stdio.h>

int main()
{
	int i, j, num;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);

	for (i = num; i > 0; i--)
	{
		for (j = 0; j < num - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}