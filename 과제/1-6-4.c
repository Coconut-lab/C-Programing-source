#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("국 영 수 점수를 입력하세요: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("평균은 %d 입니다.", (a + b + c) / 3);

    return 0;
}