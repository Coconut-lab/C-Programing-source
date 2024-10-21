#include <stdio.h>

int main()
{
	int num;

	printf("숫자를 입력하세요 (1~52) : ");
	scanf("%d", &num);

	num % 2 == 0 ? printf("숫자 %d 는 %c 입니다.\n", num, num / 2 + 64) : printf("숫자 %d 는 %c 입니다.\n", num, num / 2 + 97);

	return 0;
}