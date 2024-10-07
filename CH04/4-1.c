#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    printf("10진수 정수형 상수 %d + %d = %d 입니다.\n", 10, 20, 10 + 20);
    printf("16진수 정수형 상수 %d + %d = %d 입니다.\n", 0x10, 0x20, 0x10 + 0x20);
    printf("8진수 정수형 상수 %d + %d = %d 입니다.\n", 010, 020, 010 + 020);

    return 0;
}