#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int num;
void grow(void);

int main(void) {
    printf("함수 호출 전 num: %d\n", num);

    grow();     // 함수 호출
    printf("함수 호출 후 num: %d\n", num);

    return 0;
}

void grow(void) {
    num = 60;      // 전역변수 num의 값 변경
}