#include <stdio.h>

void ftn(int(*ap)[3], int, int);

int main(void)
{
	int arr[][3] = { 1, 2, 3, 4, 5, 6 };

	ftn(arr, 2, 3);

	return 0;
}

void ftn(int(*ap)[3], int n1, int n2)
{
	int i, j;
	for ( i = 0; i < n1; i++)
	{
		for (j = 0; j < n2; j++)
			printf("arr[%d][%d] = %d ", i, j, ap[i][j]);
		printf("\n");
	}

}