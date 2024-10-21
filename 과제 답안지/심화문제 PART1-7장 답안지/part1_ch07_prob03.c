#include <stdio.h>

int main()
{
	int i, num, power, total;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);
	printf("거듭제곱할 지수를 입력하세요 : ");
	scanf("%d", &power);

	total = num;
	for (i = 1; i < power; i++)
	{
		total *= num;
	}
	
	printf("%d의 %d승은 %d 입니다.\n", num, power, total);

	return 0;
}