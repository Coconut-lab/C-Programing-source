#include <stdio.h>

int main()
{
	char c;
	printf("문자를 입력하세요 : ");
	scanf("%c", &c);

	printf("문자 %c의 아스키 코드는 %d 입니다.\n", c, c);

	return 0;
}