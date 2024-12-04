#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void change(int *);

int main(void) {
    int num = 10;

    change(&num);

    printf("%d\n", num);

    return 0;
}

void change(int *num) {
    *num = 20;
}