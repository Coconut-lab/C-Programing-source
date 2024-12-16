#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char str[100] = {"strawberry"};
	char *cp = str;

	printf("%s\n", str + 5);
}