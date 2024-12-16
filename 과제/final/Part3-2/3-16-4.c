#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    double x;

    printf("x 값을 입력하세요: ");
    scanf("%lf", &x);

    printf("sin(%lf) = %lf\n", x, sin(x));
    printf("cos(%lf) = %lf\n", x, cos(x));

    printf("sin(%lf)^2 + cos(%lf)^2 = %lf\n", x, x, pow(sin(x), 2) + pow(cos(x), 2));
    
    return 0;
}