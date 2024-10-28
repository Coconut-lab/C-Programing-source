#include <stdio.h>

int main(void)
{
	int num;
	printf("임의의 십진수를 입력하세요:");
	scanf("%d", &num);

	printf("입력한 십진수 %d에 대응되는 ASCII 문자는 %c입니다. \n",num,num);

	return 0;
}