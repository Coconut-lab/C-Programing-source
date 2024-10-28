#include <stdio.h>

int main()
{
	int a, b;

	printf("16진수 숫자 2개를 입력하세요 : ");
	scanf("%x %x", &a, &b);
	printf("%x(16진수)+ %x(16진수) = %d(10진수) 입니다.\n", a, b, a + b);

	return 0;
}

/* 해설
입력받은 숫자를 다양한 진법으로 출력하는 문제입니다.
printf() 함수의 %d, %o, %x, %X 등의 서식문자를 잘 알아두세요.
*/