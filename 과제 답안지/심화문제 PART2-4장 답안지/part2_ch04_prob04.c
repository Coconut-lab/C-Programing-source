#include <stdio.h>

#pragma region �Լ� �����

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

#pragma region �Լ� ���Ǻ�

void inputAry(int* ary, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ��° ��Ҹ� �Է��ϼ��� :", i);
		scanf("%d", ary + i);
	}
}

void printAry(int* ary, int size)
{
	int i;
	printf("\n�Է¹��� ��:");
	for (i = 0; i < size; i++)
	{
		printf("%d ", *(ary + i));
	}
	printf("\n");
}
#pragma endregion
