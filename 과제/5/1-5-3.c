#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num;

    printf("숫자를 입력하세요: ");
    scanf("%d", &num);

    printf("숫자 %d의 2배는 (%d), 1/2배는(%d) 입니다.", num, num << 1, num >> 1);
    return 0;
}