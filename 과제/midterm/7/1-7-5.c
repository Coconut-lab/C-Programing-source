#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int A, B, C, result, count = 0;
    printf("숫자 3개를 입력하세요: ");
    scanf("%d %d %d", &A, &B, &C);

    result = A * B * C;
    printf("A * B * C = %d\n", result);

    while (result > 0) {
        count++;
        result /= 10;
    }

    printf("자릿수는 %d입니다.\n", count);

    return 0;
}