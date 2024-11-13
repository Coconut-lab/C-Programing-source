#include <stdio.h>

#pragma region 함수 선언부

void inputAry(int *, int);
void printAry(int *, int);

#pragma endregion

int main()
{
	int ary[3];

	inputAry(ary, sizeof(ary) / sizeof(ary[0]));
	printAry(ary, sizeof(ary) / sizeof(ary[0]));

	return 0;
}

#pragma region 함수 정의부

void inputAry(int* ary, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d 번째 요소를 입력하세요 :", i);
		scanf("%d", ary + i);
	}
}

void printAry(int* ary, int size)
{
	int i;
	printf("\n입력받은 수:");
	for (i = 0; i < size; i++)
	{
		printf("%d ", *(ary + i));
	}
	printf("\n");
}
#pragma endregion
