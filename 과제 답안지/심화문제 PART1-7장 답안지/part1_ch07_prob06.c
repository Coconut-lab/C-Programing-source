#include <stdio.h>

int main(void)
{
	int num, i, j;
	printf("2~9 ������ ������ �Է��ϼ���:");
	scanf("%d",&num);

	for (i=num;i<=9;i++)
	{
		for (j = 1;j<=9; j++)
		{
			printf("%d*%d=%2d ",i,j,i*j);
		}
		printf("\n");
	}

	return 0;
}