#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int subtract(int x, int y);

int main(void) {
    int a = 5, b = 3;
    int result = 0;

    result = subtract(a, b);    // 함수의 호출
    printf("뺄셈결과: %d\n", result);
    return 0;
}

int subtract(int x, int y) {    // 함수의 정의
    return x - y;
}