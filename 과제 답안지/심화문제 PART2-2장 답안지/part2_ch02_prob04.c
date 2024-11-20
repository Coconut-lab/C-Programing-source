#include <stdio.h>

int main()
{
	int ary[4][4];
	int i,j,row,col;

	row = sizeof(ary) / sizeof(ary[0]);
	col = sizeof(ary[0]) / sizeof(ary[0][0]);

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			ary[i][j] = (i + j) * (i - j);
		}
	}

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%3d", ary[i][j]);
		}
		printf("\n");
	}
}