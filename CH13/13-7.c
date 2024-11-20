// 정적변수도 가능하고 지역변수도 가능
// 자역변수 사용은 옳바른 방법은 아님

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int* input();   // 주소반환 함수

int main(void) {
    int* p = NULL;

    p = input();
    printf("%d\n", *p);
    return 0;
}

int* input() {
    static int num1;
    scanf("%d", &num1);

    return &num1;   // 정적변수라 경고 제거
}