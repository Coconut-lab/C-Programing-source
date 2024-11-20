#include <stdio.h>

void sum(int, int, int*);

int main()
{
	int a = 10, b = 20, res;
	sum(a, b, &res);
	printf("res = %d\n", res);
}

void sum(int a, int b, int *res)
{
	*res = a + b;
}