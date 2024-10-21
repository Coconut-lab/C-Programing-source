#include <stdio.h>

int main(void)
{
	int money = 2000;

	printf("처음 가지고 있는 금액 : %d원\n",money);

	money = money - 700;
	printf("음료를 뽑고 난 후 금액 : %d원\n", money);

	money = money - 500;
	printf("커피를 뽑고 난 후 금액 : %d원\n", money);

	return 0;
}