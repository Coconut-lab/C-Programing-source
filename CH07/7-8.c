#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num = 0, i, result = 0;
    printf("숫자를 입력하세요: ");
    scanf("%d", &num);

    for (i = 1; i < 10; i = i + 2) {
        result = num * i;
        printf("%d * %d = %d 입니다.\n", num, i, result);
    }

    return 0;
}