#include <stdio.h>

int main(void)
{
	int i;
	int arr[4];
	int* p = NULL;
	int** pp = NULL;

	p = arr;
	pp = &p;

	printf("[1. 주소 비교]\n");
	printf("배열의 주소 : ");
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
		printf("&arr[%d] = %x ", i, arr + i);
	printf("\n");

	printf("1차원 포인터의 주소 : &p = %x, 값 : *&p = %x\n", &p, p);
	printf("2차원 포인터의 주소 : &pp = %x, 값 : *&pp = %x\n", &pp, pp);

	printf("\n[2. 1차원 포인터를 이용한 배열의 값 저장]\n");
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		*(p + i) = i * 10;
		printf("arr[%d] = %d ", i, p[i]);
	}
	printf("\n");

	printf("\n[3. 2차원 포인터를 이용한 배열의 값 출력]\n");
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
		printf("arr[%d] = %d ", i, *(*pp + i));
	printf("\n");



	return 0;
}