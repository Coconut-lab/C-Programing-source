#include <stdio.h>

int main()
{
	int num;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);

	printf("숫자 %d의 2배는 (%d), 1/2배는(%d) 입니다.\n", num, num << 1, num >> 1);

	return 0;
}