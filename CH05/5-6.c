#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num1 = 10;
    printf("%d\n", num1); // 결과 10

    num1++;         // num1 = num1 + 1;
    printf("%d\n", num1); // 결과 11

    ++num1;         // num1 = num1 + 1;
    printf("%d\n", num1); // 결과 12

    --num1;         // num1 = num1 - 1;
    printf("%d\n", num1); // 결과 11

    num1--;         // num1 = num1 - 1;
    printf("%d\n", num1); // 결과 10

    return 0;
}