#include <stdio.h>

int main(void)
{
	int i, j;
	int arr[2][2] = { 1, 2, 3, 4 };

	printf("�迭�� �ּ� ���\n");
	for (i = 0; i < sizeof(arr[0])/sizeof(int); i++)
	{
		for (j = 0; j < 2; j++)
			printf("%d��%d��: %#p %#p %#p\n", i, j, &arr[i][j], arr[i] + j, *(arr + i) + j);
	}

	printf("\n�迭�� �� ���\n");
	for (i = 0; i < sizeof(arr[0]) / sizeof(int); i++)
	{
		for (j = 0; j < 2; j++)
			printf("%d��%d��: %d %d %d\n", i, j, *&arr[i][j], *(arr[i] + j), *(*(arr + i) + j));
	}

	return 0;
}