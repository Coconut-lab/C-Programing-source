#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point {
    int x;
    int y;
};

struct point function1(void);       // 함수의 선언
struct point* function2(void);       // 함수의 선언

int main(void) {
    struct point p1;
    struct point* p2;

    p1 = function1();     // 구조체 변수에 함수의 반환값을 저장 (복사본)
    p2 = function2();    // 구조체 변수에 함수의 반환값을 저장 (주소)

    printf("%d %d\n", p1.x, p1.y);
    printf("%d %d\n", p2 -> x, p2 -> y);
    
    return 0;
}

struct point function1(void) {       // 함수의 정의 (원본)
    struct point call;
    call.x = 10;    call.y = 20;
    return call;       // 구조체 변수 call 반환
}

struct point* function2(void) {
    static struct point call;
    call.x = 30;   call.y = 40;
    return &call;      // 구조체 변수 call의 주소 반환
}