#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i, factorial = 1;

    for (i = 1; i <= 10; ) {
        factorial = factorial * i;
        i++;
    }
    printf("1부터 10까지의 곱: %d\n", factorial);

    return 0;
}