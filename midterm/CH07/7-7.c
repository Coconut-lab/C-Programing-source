#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i, sum = 0;

    for (i = 0; i <= 10; i++) {
        sum = sum + i;
        printf("i = %d, sum = %d\n", i, sum);
    }
    printf("-------- 반복문 종료 --------\n");

    return 0;
}