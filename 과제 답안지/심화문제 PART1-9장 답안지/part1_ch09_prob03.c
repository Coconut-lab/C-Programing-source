#include <stdio.h>

void menu();
double sum(double, double);
double min(double, double);
double mul(double, double);
double div(double, double);

int main()
{
	int num;
	double n1, n2, ans;
	char ch;

	while (1)
	{
		menu();
		printf("??? ????? ???????? : ");
		scanf("%d", &num);

		switch (num)
		{
			case 1:
				printf("???? ???????? : ");
				scanf("%lf %c %lf",&n1,&ch,&n2);

				switch (ch)
				{
					case '+':
						ans = sum(n1, n2);
						break;
					case '-':
						ans = min(n1, n2);
						break;
					case '*':
						ans = mul(n1, n2);
						break;
					case '/':
						ans = div(n1, n2);
						break;
				}
				break;

			case 0:
				printf("???????? ????????...\n");
				return 0;

			default:
				printf("??? ??????????.\n");
				break;
		}
		printf("??? : %.1lf\n\n", ans);
	}
}

void menu()
{
	printf("========= MENU =========\n");
	printf("1. ?????? ????\n");
	printf("0. ?????? ????\n");
	printf("------------------------\n");
}

double sum(double a, double b)
{
	return a + b;
}
double min(double a, double b)
{
	return a - b;
}
double mul(double a, double b)
{
	return a * b;
}
double div(double a, double b)
{
	return a / b;
}