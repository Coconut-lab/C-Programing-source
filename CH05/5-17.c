#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num1 = 10;
    int result1;

    result1 = num1 << 2;
    printf("비트단위 <<연산 결과: %d\n", result1); // 40

    return 0;
}