#include <stdio.h>

int main()
{
	int num;

	printf("8진수를 입력하세요 : ");
	scanf("%o", &num);

	printf("입력한 숫자는 10진수로 %d 입니다.\n", num);

	return 0;
}