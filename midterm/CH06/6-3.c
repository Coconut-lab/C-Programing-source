#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    signed char num1 = 130;     // 오버플로우
    unsigned char num2 = 130;

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;

}