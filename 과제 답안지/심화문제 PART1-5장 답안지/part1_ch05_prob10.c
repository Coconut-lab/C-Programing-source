#include <stdio.h>

int main(void)
{
	int money = 2700;
	int count;

	printf("%d���� 1000��, 500��, 100������ ������ ���\n",money);

	count = money / 1000;
	money = money % 1000;

	printf("1000��: %d��\n",count);

	count = money / 500;
	money = money % 500;

	printf("500��: %d��\n", count);

	count = money / 100;
	money = money % 100;

	printf("100��: %d��\n", count);

	return 0;
}