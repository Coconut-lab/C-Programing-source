#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a = 3;
    int b = 4;

    printf("a의 값: %d\n", a);
    printf("b의 값: %d\n", b);

    printf("변수 a의 시작 주소: %x\n", &a);
    printf("변수 b의 시작 주소: %x\n", &b);

    return 0;
}