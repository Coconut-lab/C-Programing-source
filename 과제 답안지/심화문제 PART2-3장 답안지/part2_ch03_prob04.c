#include <stdio.h>

int main()
{
	int num = 10;
	int *ip = &num;
	int **ipp = &ip;

	printf("%d\n", **ipp);
}