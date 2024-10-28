#include <stdio.h>

int main()
{
	int num1, num2;

	printf("수식을 입력하세요 : ");
	scanf("%d+%d", &num1, &num2);

	printf("답 : %d\n", num1 + num2);

	return 0;
}