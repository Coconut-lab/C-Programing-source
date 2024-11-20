#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ranInputAry(int*, int);
void printAry(int*, int);

int main()
{
	int ary[5];
	srand(time(0));

	ranInputAry(ary, sizeof(ary) / sizeof(int));
	printAry(ary, sizeof(ary) / sizeof(int));

	return 0;
}
int random(int n)				/* ���� ��� �Լ� */
{
	int res;
	res = rand() % n; // 0���� n-1������ ���� ���� �߻� 
	return res;
}

void ranInputAry(int *ary, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		ary[i] = random(100);
	}
}
void printAry(int *ary, int size)
{
	int i;
	printf("���� ������ �迭�� ��� : ");
	for (i = 0; i < size; i++)
	{
		printf("%3d ", ary[i]);
	}
	printf("\n");
}