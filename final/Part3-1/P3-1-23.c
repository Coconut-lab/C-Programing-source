// 트리구조 및 무한반복문으로 공부하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct point {
    int x;
    int y;
    struct point* link;     // 구조체 포인터 변수 (트리 구조)
    struct point* rlink;    // 구조체 포인터 변수 (트리 구조)
};

void function(struct point call);   // 함수의 선언, 함수의 리스트

int main(void) {
    // struct point p = {10, 20};   // PDF 코드
    struct point p;
    p.x = 10;   p.y = 20;

    function(p);
    
    return 0;
}

void function(struct point call) {      // 함수의 정의, 함수의 알고리즘
    printf("복사본: %d %d\n", call.x, call.y);
}