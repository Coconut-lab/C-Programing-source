#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printAry(int*, int);

int main() {
	int ary[5] = {1, 2, 3, 4, 5};

	printAry(ary, sizeof(ary) / sizeof(ary[0]));

	return 0;
}

void printAry(int *ary, int size) {
	for (int i = 0; i < size; i++) {
		printf("%2d,", *(ary + i));
	}
	printf("\b \n");
}