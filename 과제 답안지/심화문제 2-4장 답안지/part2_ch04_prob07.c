#include <stdio.h>

int main()
{
	int ary[4][4];

#pragma region Blind

	int i, j, temp = 1;

	printf("-�迭�� ���-\n");

	for (i = 0; i < sizeof(ary) / sizeof(ary[0]); i++)
	{
		for (j = 0; j < sizeof(ary[0]) / sizeof(ary[0][0]); j++)
		{
			ary[i][j] = temp;
			printf("%2d  ", temp);
			temp++;
		}
		printf("\n");
	}

	printf("\n�迭�� �밢�� ���:");

	for (i = 0; i < sizeof(ary) / sizeof(ary[0]); i++)
	{
		for (j = 0; j < sizeof(ary[0]) / sizeof(ary[0][0]); j++)
		{
			if (i == j)
			{
				printf("%2d  ", ary[i][j]);
			}
		}
	}

#pragma endregion

	printf("\n\n");
	return 0;
}

