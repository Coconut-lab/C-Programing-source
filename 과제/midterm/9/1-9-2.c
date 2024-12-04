#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double sum(double, double);
int main(void) {
    double a, b;
    scanf("%lf + %lf", &a, &b);
    printf("결과: %.1lf\n", sum(a, b));

    return 0;
}

double sum(double a, double b) {
    return a + b;
}