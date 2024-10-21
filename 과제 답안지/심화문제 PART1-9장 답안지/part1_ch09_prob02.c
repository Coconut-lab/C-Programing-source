#include <stdio.h>

double sum(double, double);

int main()
{
	int n1, n2;
	char ch;

	scanf("%d %c %d", &n1, &ch, &n2);
	
	printf("°á°ú : %.1lf\n", sum(n1, n2));
}

double sum(double a, double b)
{
	return a + b;
}