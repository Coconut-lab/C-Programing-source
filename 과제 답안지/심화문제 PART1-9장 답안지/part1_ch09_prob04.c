#include <stdio.h>

int checkInt(char);

int main()
{
	char ch;
	printf("문자를 입력하세요 : ");
	scanf("%c", &ch);

	printf("입력한 문자 %c는(은) 숫자", ch);
	
	if (checkInt(ch))
	{
		printf("입니다.\n");
	}
	else
	{
		printf("가 아닙니다.\n");
	}

	return 0;
}

int checkInt(char ch)
{
	if (ch > 47 && ch < 58)
		return 1;

	return 0;
}