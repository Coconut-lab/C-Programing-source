#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct group {
    int a;
    double b;
};

int main(void) {
    struct group g1;    // 구조체 변수 g1 선언
    struct group* p;    // 구조체 포인터 p 선언

    g1.a = 10;          // 구조체 변수로 멤버 변수 접근
    g1.b = 1.1234;      // 구조체 변수로 멤버 변수 접근

    p = &g1;            // 구조체 포인터에 구조체 변수 주소 대입

    printf("g1.a의 값: %d\n필드 변수 주소1: %x\n레코드 변수 주소2: %x\n\n", g1.a, &g1.a, &g1);
    printf("g1.b의 값: %lf\n필드 변수주소: %x\n레코드 변수 주소2: %x\n", g1.b, &g1.b, &g1);

    printf("\n%d %lf\n", p -> a, p -> b);    // 구조체 포인터로 멤버 변수 접근 (화살표 연산자 사용 가능)

    printf("%d %lf\n", (*p).a, (*p).b);      // 가능
    // printf("%d %lf\n", *p.a, *p.b);          // 불가능 (p.a, p.b는 구조체 포인터가 아니기 때문)

    return 0;
}