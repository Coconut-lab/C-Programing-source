#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a, b, c, result, cnt = 0;

    printf("숫자 3개를 입력하세요: ");
    scanf("%d %d %d", &a, &b, &c);

    result = a * b * c;
    printf("A * B * C = %d\n", result);

    while (result != 0) {
        result /= 10;
        cnt++;
    }

    printf("자릿수는 %d입니다.\n", cnt);

    return 0;
}