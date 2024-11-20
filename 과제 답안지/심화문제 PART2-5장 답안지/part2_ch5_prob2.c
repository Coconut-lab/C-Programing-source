#include <stdio.h>

void init(int*, int);
void change(int*, int, int);

int main(void)
{
	int i, a, b, result;
	int arr[3];

	init(arr, sizeof(arr) / sizeof(int));

	printf("1. 배열의 초기화: ");
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
		printf("arr[%d] = %d ", i, arr[i]);
	printf("\n");

	printf("2. 배열의 값 입력\n");
	
	printf("배열의 인덱스: ");
	scanf("%d", &a);
	
	printf("배열의 값: ");
	scanf("%d", &b);
	
	change(arr, a, b);

	printf("3. 결과 출력: ");
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

void change(int* p, int index, int num)
{
	p[index] = num;
}