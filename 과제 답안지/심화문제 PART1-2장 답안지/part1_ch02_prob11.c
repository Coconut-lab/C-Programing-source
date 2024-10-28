#include <stdio.h>

int main()
{
	int num;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);

	printf("\n입력한 숫자(10진수) : %d	\n",num);
	printf("입력한 숫자(8진수) : %o	\n", num);
	printf("입력한 숫자(16진수) : %x	\n", num);

	return 0;
}

/* 해설
입력받은 숫자를 다양한 진법으로 출력하는 문제입니다.
printf() 함수의 %d, %o, %x, %X 등의 서식문자를 잘 알아두세요.
*/