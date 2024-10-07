#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double calculate_cm2_circle(double);
double calculate_cm_circle(double);
int main(void) {
    double n;
    printf("반지름 입력(cm): ");
    scanf("%lf", &n);
    printf("원의 넓이 %.2lfPI(cm2)\n", calculate_cm2_circle(n));
    printf("원의 둘레 %.2lfPI(cm)\n", calculate_cm_circle(n));

    return 0;
}

double calculate_cm2_circle(double n) {
    double result = 0;
    result = n * n;

    return result;
}

double calculate_cm_circle(double n) {
    double result = 0;
    result = 2 * n;

    return result;

}