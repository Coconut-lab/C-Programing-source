#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "CHJ.h"

int main(void) {
    char ch;
    int i = 1, final;
    double diviFinal;
    int num1, num2;

    while (i == 1) {
        printf("계산식 입력: ");
        scanf("%d %c %d", &num1, &ch, &num2);

        if (ch == '+') {
            final = sum(num1, num2);
            printf("결과: %d\n", final);
        } else if (ch == '-') {
            final = minus(num1, num2);
            printf("결과: %d\n", final);
        } else if (ch == '*') {
            final = multiply(num1, num2);
            printf("결과: %d\n", final);
        } else if (ch == '/') {
            diviFinal = divide(num1, num2);
            printf("결과: %.2lf\n", diviFinal);
        } else {
            printf("입력이 올바르지 않습니다.\n");
            i = 0;
            break;
        }
    }
    return 0;
}