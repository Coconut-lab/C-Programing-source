#include <stdio.h>

int main()
{
	int i, j, num;

	printf("숫자를 입력하세요 : ");
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