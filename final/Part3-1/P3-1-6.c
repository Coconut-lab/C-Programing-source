#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point {
    int x;
    int y;
};

int main(void) {
    struct point p1 = {10, 20};   // 구조체 변수 선언과 초기화
    struct point p2 = {0, 0};   // 구조체 변수 선언과 초기화

    p2 + p1;    // 에러 발생
    p2 - p1;    // 에러 발생

    return 0;
}