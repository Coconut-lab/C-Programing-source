#include <stdio.h>

int max(int, int);

int main()
{
	int a, b;
	printf("두 숫자를 입력하세요 :");
	scanf("%d %d", &a, &b);

	printf("%d, %d 중 큰 숫자는 %d 입니다.\n",a, b, max(a, b));

	return 0;
}

int max(int a, int b)
{
	if (a < b)
		return b;
	else
		return a;
}