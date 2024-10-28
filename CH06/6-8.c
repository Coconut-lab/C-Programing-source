#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    float num1 = 0.123456;

    printf("float형: %f\n", num1);  // 0.123456
    printf("float형: %.2f\n", num1);  // 0.12

    return 0;
}