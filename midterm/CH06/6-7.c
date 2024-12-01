#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    float num1 = 0.123456789012345;
    double num2 = 0.123456789012345;

    printf("float형: %f\n", num1);  // 0.123457
    printf("double형: %lf\n", num2); // 0.123457

    printf("float형: %.15f\n", num1);  // 0.123456791043281
    printf("double형: %.15lf\n", num2); // 0.123456789012345

    return 0;
}