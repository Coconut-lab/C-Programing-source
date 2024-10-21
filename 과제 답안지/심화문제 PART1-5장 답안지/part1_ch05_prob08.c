#include <stdio.h>

int main(void)
{
	int a, b;
	char c;

	scanf("%d %c %d", &a, &c, &b);

	c == '+' ? printf("계산결과는 %d입니다.\n", a + b) : printf("덧셈만 가능한 계산기입니다.\n");

	return 0;
}