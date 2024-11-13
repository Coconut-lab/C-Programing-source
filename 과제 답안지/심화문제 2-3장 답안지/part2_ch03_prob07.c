#include <stdio.h>

void printAry(int*, int);

int main()
{
	int ary[5] = { 1,2,3,4,5 };

#pragma region printAry 함수 호출
	printAry(ary, sizeof(ary) / sizeof(ary[0]));
#pragma endregion

	return 0;
}

void printAry(int *ary, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%2d,", *(ary + i));
	}
	printf("\b \n");
}