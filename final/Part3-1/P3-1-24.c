// 무한반복문

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct point {
    int x;
    int y;
};

void function1(struct point call);    // 함수의 선언, 함수의 리스트 copy & paste (call by value)
void function2(struct point* call);   // 함수의 선언, 함수의 리스트 adress (call by reference)

int main(void) {
    // struct point p = {10, 20};   // PDF 코드
    struct point p;
    p.x = 10;   p.y = 20;

    function1(p);   // call by value
    function2(&p);  // call by reference (address)

    return 0;
}

void function1(struct point call) {      // 함수의 정의, 함수의 알고리즘
    printf("복사본: %d %d\n", call.x, call.y);
}

void function2(struct point* call) {    // 함수의 정의, 함수의 알고리즘
    printf("원본의 위치: %d %d\n", call -> x, call -> y);
    printf("원본의 위치: %d %d\n", (*call).x, (*call).y);
}