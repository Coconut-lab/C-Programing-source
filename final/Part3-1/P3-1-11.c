// 14-1.c 와 14-11.c의 차이점을 알기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point {
    int* x;
    int* y;
};

int main(void) {
    int num1 = 4;
    int num2 = 5;

    struct point p1;

    p1.x = &num1;
    p1.y = &num2;

    printf("%d %d\n", num1, num2);
    printf("%d %d\n", *p1.x, *p1.y);

    return 0;
}