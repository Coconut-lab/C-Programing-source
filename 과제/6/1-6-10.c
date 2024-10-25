#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef unsigned int pm;

int main(void) {
    pm num;

    printf("제곱미터로 변환할 평방미터(평)를 입력하세요: ");
    scanf("%d", &num);

    printf("%d평은 %.2lf제곱미터입니다.", num, num * 3.3);

    return 0;
}