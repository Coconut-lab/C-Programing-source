#include <stdio.h>

int main(void)
{
	int num, i, j;
	printf("2~9 ������ ������ �Է��ϼ���:");
	scanf("%d", &num);

	for (i = 1; i<=9; i++)
	{
		for (j = num; j<=9; j++)
		{
			printf("%d*%d=%2d ", j, i, i*j);
		}
		printf("\n");
	}

	return 0;
}