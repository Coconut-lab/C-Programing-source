#include <stdio.h>

int main()
{
	char ch,ch2,ch3,ch4,ch5;
	printf("5개의 소문자를 입력하세요  : _____\b\b\b\b\b ");
	scanf("%c,%c,%c,%c,%c", &ch,&ch2<&ch3,&ch4,&ch5);
	printf("대문자 변환 : %c%c%c%c%c\n", ch-32, ch2 - 32, ch3 - 32, ch4 - 32, ch5 - 32);

	return 0;
}