#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n);

int main(void) {
    int a;
    int result;
    printf("정수 입력: ");
    scanf("%d", &a);

    result = factorial(a);
    printf("%d! = %d\n", a, result);
    return 0;
}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}