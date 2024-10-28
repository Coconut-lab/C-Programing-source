#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num1 = 20;
    int result1;

    result1 = ~num1;
    printf("비트단위 ~연산 결과: %d\n", result1); // -21

    return 0;
}