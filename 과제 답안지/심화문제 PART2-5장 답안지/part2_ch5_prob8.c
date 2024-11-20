#include <stdio.h>

int * findAry(int*, int,int);

int main()
{
	int * ip;
	int num, ary[5] = { 1,2,3,4,5 };
	printf("찾을 숫자를 입력하세요 : ");
	scanf("%d", &num);

#pragma region findAry 함수 호출
	ip = findAry(ary, sizeof(ary) / sizeof(int), num);
#pragma endregion

	if (ip == NULL)
		printf("숫자가 존재하지 않습니다.\n");
	else
		printf("%d\n",*ip);
}

int * findAry(int *ary, int size, int num)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (ary[i] == num)
			return ary+i;
	}
	return NULL;
}