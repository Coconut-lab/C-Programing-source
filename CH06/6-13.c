#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num1 = 10, num2 = 3;
    double result;

    result = num1 / num2;
    printf("result is %lf\n", result);

    result = (double)num1 / num2;
    printf("result is %lf\n", result);

    result = num1 / (double)num2;
    printf("result is %lf\n", result);

    result = (double)num1 / (double)num2;
    printf("result is %lf\n", result);

    return 0;
}