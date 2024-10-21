#include <stdio.h>

int main(void)
{
	int money = 10000;

	printf("처음 입금했을 때의 금액:%d원\n",money);

	money = money*1.02;
	printf("1년 후의 금액:%d원\n", money);

	money = money*1.02;
	printf("2년 후의 금액:%d원\n", money);

	return 0;
}