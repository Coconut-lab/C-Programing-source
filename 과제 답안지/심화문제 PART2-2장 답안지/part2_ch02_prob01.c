#include <stdio.h>

int main(void)
{
	int i, j, num;
	int arr[4][5];

	num = 0;
	for (i = 0; i < 4; i++)			// ¦�� �Է�
	{
		for (j = 0; j < 5; j = j + 2)
		{
			arr[i][j] = num;
			num = num + 2;
		}
	}

	num = 1;
	for (j = 1; j < 5; j = j + 2)	// Ȧ�� �Է�
	{
		for (i = 0; i < 4; i++)
		{
			arr[i][j] = num;
			num = num + 2;
		}
	}

	//Ȧ�� �Է� �ٸ� ��Ģ
/*	for (i = 0; i < 4; i++)
	{
		for (j = 1; j < 5; j = j + 2)
		{
			arr[i][j] = num;
			num = num + 8;
		}
		num = num - 14;
	}*/

	for (i = 0; i < 4; i++)		// ��º�
	{
		for (j = 0; j < 5; j++)
			printf("%02d ", arr[i][j]);
		printf("\n");
	}

	return 0;
}