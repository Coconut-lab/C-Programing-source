#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    printf("10진수 정수: %d\n", 0.5);
    printf("10진수 정수: %f\n", 0.5);
    printf("10진수 정수: %lf\n", 0.5);

    printf("소수점 이하 6자리이상: %f\n", 0.5655678);
    printf("소수점 이하 6자리이상: %lf\n", 0.5667784);

    return 0;
}