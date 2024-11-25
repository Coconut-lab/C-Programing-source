#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point {
    int x;
    int y;
};

int main(void) {
    struct point p1 = {10, 20};   // 구조체 변수 선언과 초기화

    printf("%d %d\n", p1.x, p1.y);

    return 0;
}