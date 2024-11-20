#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0;
	int* p1 = NULL;
	int* p2 = NULL;
	int** pp = NULL;

	pp = &p2;

	p1 = &a;
	*p1 = 10;
	printf("a=%d, b=%d, c=%d\n", a, b, c);

	p1 = &b;
	*p1 = 20;
	printf("a=%d, b=%d, c=%d\n", a, b, c);

	p2 = &c;
	**pp = 30;
	printf("a=%d, b=%d, c=%d\n", a, b, c);

	return 0;
}