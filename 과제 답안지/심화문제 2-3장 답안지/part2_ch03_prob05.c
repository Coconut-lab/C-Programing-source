#include <stdio.h>

void change(int *);

int main()
{
	int num = 10;

#pragma region change 함수 호출
	change(&num);
#pragma endregion

	printf("%d\n", num);

	return 0;
}

void change(int *num)
{
	*num = 20;
}