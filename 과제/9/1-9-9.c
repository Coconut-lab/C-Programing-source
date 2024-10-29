#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int a, int b);
int minus(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);

int main(void) {
    char ch;
    int  final;
    double diviFinal;
    int num1, num2;

    /*
    while (1) {
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
            break;
        }
    }
    */
    for (;1;) {
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
            break;
        }
    }
    return 0;
}

int sum(int a, int b) {
    return a + b;
}
int minus(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
double divide(int a, int b) {
    double result;

    result = (double)a / b;
    return result;
}