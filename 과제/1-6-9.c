#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    double num, result;

    printf("남학생 A의 키를 입력하세요: ");
    scanf("%lf", &num);

    result = (num - 100) * 0.9;
    printf("남학생 A의 표준 체중은 %.2lf입니다.\n", result);

    return 0;
}