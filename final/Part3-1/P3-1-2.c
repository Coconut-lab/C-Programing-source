#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct group {  // 구조체(레코드) 정의
    int a;              // 필드, 멤버변수
    double b;           // 필드, 멤버변수
} GROUP;                // 구조체 별칭 (제정의)

int main(void) {
    // struct group g1;    // 구조체(레코드) 변수 g1 선언
    GROUP g1;             // 구조체(레코드) 변수 g1 선언

    scanf("%d %lf", &(g1.a), &(g1.b));

    printf("g1.a의 값: %d\n", g1.a);
    printf("g1.b의 값: %lf\n", g1.b);

    return 0;
}