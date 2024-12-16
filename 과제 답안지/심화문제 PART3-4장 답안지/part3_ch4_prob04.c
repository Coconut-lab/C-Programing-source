#include <stdio.h>
#include <malloc.h>

int main()
{
	int **ary;
	int num;
	int i, j, temp = 1;

	printf("배열의 크기를 입력하세요 : ");
	scanf("%d", &num);

	// 2차원 배열 동적할당
	ary = (int **)calloc(1, sizeof(int*) * num);

	for (i = 0; i < num; i++)
	{
		ary[i] = (int *)calloc(1, sizeof(int) * num);
	}

	printf("\n-배열의 요소-\n");

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			ary[i][j] = temp;
			printf("%2d  ", temp);
			temp++;
		}
		printf("\n");
	}

	printf("\n배열의 대각선 요소:");

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			if (i == j)
			{
				printf("%2d  ", ary[i][j]);
			}
		}
	}

	printf("\n\n");

	// 2차원 배열 동적할당 해재
	for (i = 0; i < num; i++)
	{
		free(ary[i]);
	}
	free(ary);
	return 0;
}
