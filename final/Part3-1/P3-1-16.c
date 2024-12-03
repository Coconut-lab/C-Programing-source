#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point {
    int* x;     // 1차원 포인터 멤버변수
    int** y;    // 2차원 포인터 멤버변수
};

int main(void) {
    int num1 = 3;
    struct point p1;

    p1.x = &num1;
    p1.y = &p1.x;

    printf("%d %d %d\n", num1, *p1.x, **p1.y);

    return 0;
}