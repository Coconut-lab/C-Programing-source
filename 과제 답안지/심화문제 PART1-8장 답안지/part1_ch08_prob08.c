#include <stdio.h>

int main(void)
{
	int year, check;
	printf("���� ���θ� ������ ������ �Է��ϼ���(yyyy): ");

	scanf("%d", &year);

	if (year % 4 == 0 && year%100!=0)
	{
		check = 1;
	}

	else if (year % 400 == 0)
	{
		check = 1;
	}

	else
	{
		check = 0;
	}

	if (check)
	{
		printf("%d�� �����Դϴ�.\n",year);
	}
	else
	{
		printf("%d�� ������ �ƴմϴ�.\n",year);
	}

	return 0;
}