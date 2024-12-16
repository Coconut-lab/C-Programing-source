#include <stdio.h>

int main()
{
	char str[255];
	printf("문장 입력 : ");
	gets(str);
	printf("입력한 문장 : ");
	puts(str);
}