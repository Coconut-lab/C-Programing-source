#include <stdio.h>

int main()
{
	char ch;
	printf("문자를 입력해주세요 : ");
	scanf("%c", &ch);
	printf("입력한 문자는 알파벳");
	(ch > 64 && ch < 91) && (ch > 96 && ch < 123) ? printf("입니다\n") : printf("이 아닙니다.\n");
}

/*
  아스키 코드표를 참조하면
  대문자는 65 ~ 90번까지이며
  소문자는 97 ~ 123번 까지 입니다.
  이를 조건 연산자와 비교 연산자를 통해 표현합니다.
*/