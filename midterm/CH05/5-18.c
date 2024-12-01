#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num1 = 10;
    int num2 = -10;

    int result1;
    int result2;

    result1 = num1 >> 1;
    result2 = num2 >> 1;

    printf("비트단위 >> 연산 결과: %d\n", result1); // 5
    printf("비트단위 >> 연산 결과: %d\n", result2); // -5

    return 0;
}