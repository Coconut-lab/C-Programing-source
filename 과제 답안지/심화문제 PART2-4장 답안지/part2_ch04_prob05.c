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
int random(int n)				/* 난수 출력 함수 */
{
	int res;
	res = rand() % n; // 0부터 n-1까지의 수중 난수 발생 
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
	printf("랜덤 생성된 배열의 요소 : ");
	for (i = 0; i < size; i++)
	{
		printf("%3d ", ary[i]);
	}
	printf("\n");
}