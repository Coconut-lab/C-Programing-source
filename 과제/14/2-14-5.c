#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14

void area(double* dp);

int main(void) {
    double r;
    void* vp = NULL;

    vp = &r;

    printf("반지름 입력: ");
    scanf("%lf", (double*)vp);

    area((double*)vp);

    return 0;
}

void area(double* dp) {
    double result;
    result = PI * (*dp) * (*dp);

    printf("원의 넓이: %.2lf\n", result);
}