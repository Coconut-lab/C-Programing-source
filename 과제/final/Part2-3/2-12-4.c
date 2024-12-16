#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num = 10;
	int *ip = &num;
	int **ipp = &ip;

	printf("%d\n", **ipp);
}