#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num;

    printf("학번을 입력하세요: ");
    scanf("%d", &num);

    printf("당신의 학번은 %d입니다.\n", num);
    printf("변수의 주소: %x\n", &num);

    return 0;
}