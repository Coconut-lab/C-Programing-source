#include <stdio.h>

int main(void)
{
	int i;
	int arr[4];
	int* p = NULL;
	int** pp = NULL;

	p = arr;
	pp = &p;

	printf("[1. �ּ� ��]\n");
	printf("�迭�� �ּ� : ");
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
		printf("&arr[%d] = %x ", i, arr + i);
	printf("\n");

	printf("1���� �������� �ּ� : &p = %x, �� : *&p = %x\n", &p, p);
	printf("2���� �������� �ּ� : &pp = %x, �� : *&pp = %x\n", &pp, pp);

	printf("\n[2. 1���� �����͸� �̿��� �迭�� �� ����]\n");
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		*(p + i) = i * 10;
		printf("arr[%d] = %d ", i, p[i]);
	}
	printf("\n");

	printf("\n[3. 2���� �����͸� �̿��� �迭�� �� ���]\n");
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
		printf("arr[%d] = %d ", i, *(*pp + i));
	printf("\n");



	return 0;
}