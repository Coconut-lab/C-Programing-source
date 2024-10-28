#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num1 = 20, num2 = 16;
    int result1;

    result1 = num1 & num2;
    printf("비트단위 & 연산의 결과 %d\n", result1);    // 16

    return 0;
}