#include <stdio.h>

void init(int*, int);

int main(void)
{
	int i;
	int arr[3];

	printf("�迭�� �ʱ�ȭ ��: ");
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
		printf("arr[%d] = %d ", i, arr[i]);
	printf("\n\n");
	
	init(arr, sizeof(arr) / sizeof(int));

	printf("�迭�� �ʱ�ȭ: ");
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
		printf("arr[%d] = %d ", i, arr[i]);
	printf("\n");

	return 0;
}

void init(int* p, int num)
{
	int j;
	for (j = 0; j < num; j++)
		p[j] = 0;
}