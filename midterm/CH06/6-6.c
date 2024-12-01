#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    float num1 = 3.4e+30;
    double num2 = 3.4e+30;

    printf("%f, %e\n", num1, num1);    // float형 오차발생
    printf("%lf, %le\n", num2, num2);    // double형 정상출력

    return 0;
}