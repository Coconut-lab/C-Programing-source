#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num1 = 10, num2 = 10;

    printf("%d\n", ++num1);    // 결과는 11
    printf("%d\n", num1);      // 결과는 11

    printf("%d\n", num2++);    // 결과는 10
    printf("%d\n", num2);      // 결과는 11

    return 0;
}