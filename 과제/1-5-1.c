#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num;

    printf("십의 자리 숫자를 입력하세요: ");
    scanf("%d", &num);

    printf("숫자 %d의 십의 자리와 일의 자릿수의 합은 %d입니다.", num, num / 10 + num % 10);
    return 0;
}