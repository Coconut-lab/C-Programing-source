#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a = 0, b = 0, c = 0;
    int* ip = NULL;     // 포인터 변수 선언

    ip = &a;            // ip에 a의 주소 저장
    *ip = 10;
    printf("%d %d %d %d\n", a, b, c, *ip);

    ip = &b;            // ip에 b의 주소 저장 (변경)
    *ip = 20;
    printf("%d %d %d %d\n", a, b, c, *ip);

    ip = &c;            // ip에 c의 주소 저장 (변경)
    *ip = 30;
    printf("%d %d %d %d\n", a, b, c, *ip);

    return 0;
}