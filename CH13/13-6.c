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
    int num1;
    scanf("%d", &num1);

    return &num1;   // 지역변수라 경고 발생
}