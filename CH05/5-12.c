#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num1 = 2, num2 = 3;
    int result1;

    result1 = (num1 > num2) ? num1 : num2;
    // (조건) ? 참일시 : 거짓일시
    printf("result1에 저장된 값 %d\n", result1);

    return 0;
}