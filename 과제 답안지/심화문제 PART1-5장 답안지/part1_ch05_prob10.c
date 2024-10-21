#include <stdio.h>

int main(void)
{
	int money = 2700;
	int count;

	printf("%d원을 1000원, 500원, 100원으로 구별한 결과\n",money);

	count = money / 1000;
	money = money % 1000;

	printf("1000원: %d개\n",count);

	count = money / 500;
	money = money % 500;

	printf("500원: %d개\n", count);

	count = money / 100;
	money = money % 100;

	printf("100원: %d개\n", count);

	return 0;
}