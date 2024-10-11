#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;

    printf("숫자를 입력하세요: ");
    scanf("%d", &num);

    printf("%s\n", num & 1 ? "홀수입니다." : "짝수입니다.");

    return 0;
}