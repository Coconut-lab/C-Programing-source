#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a[3] = { 0 };
	int* p = NULL;
	int** pp = NULL;
	p = a;
	pp = &p;

	*p = 10;
	*(p + 1) = 20;
	*(p + 2) = 30;

	printf("a[0] = %d, a[1] = %d, a[2] = %d\n", *(*pp + 0), *(*pp + 1), *(*pp + 2));

	return 0;
}