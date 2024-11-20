#include <stdio.h>

int main()
{
	char str[255] = { 0 };
	printf("영어 단어를 입력하세요 : ");
	scanf("%s", str);
	printf("입력한 단어는 '%s' 입니다.\n",str);
}