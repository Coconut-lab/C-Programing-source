#include <stdio.h>

#define INPUT 10000

int main()
{
	int price, count = 0;

	printf("��� �ݾ� �Է� : ");
	scanf("%d", &price);

	price = INPUT - price;

	while (price / 1000 != 0)
	{
		count++;
		price -= 1000;
	}
	while (price / 500 != 0)
	{
		count++;
		price -= 500;
	}
	while (price / 100 != 0)
	{
		count++;
		price -= 100;
	}
	while (price / 50 != 0)
	{
		count++;
		price -= 50;
	}
	while (price / 10 != 0)
	{
		count++;
		price -= 10;
	}
	count += price;

	printf("�ܵ��� ������ %d�� �Դϴ�.\n", count);
}