#include <stdio.h>

int main(void)
{
	int year, check;
	printf("윤년 여부를 조사할 연도를 입력하세요(yyyy): ");

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
		printf("%d는 윤년입니다.\n",year);
	}
	else
	{
		printf("%d는 윤년이 아닙니다.\n",year);
	}

	return 0;
}