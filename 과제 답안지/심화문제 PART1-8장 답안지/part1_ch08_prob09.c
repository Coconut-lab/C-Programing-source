#include <stdio.h>

int main()
{
	int a, b, c, i, temp, position;

	printf("숫자 3개를 입력하세요 : ");
	scanf("%d %d %d", &a, &b, &c);

	temp = a*b*c;
	i = 0;

	while (temp != 0)
	{
		temp /= 10;
		i++;
	}

	printf("A * B * C = %d\n", a*b*c);
	printf("자릿수는 %d 입니다.\n", i);

	return 0;
}