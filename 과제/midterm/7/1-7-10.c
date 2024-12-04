#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num, result = 0;

    printf("자연수를 입력하세요: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        result += i;
    }

    printf("1부터 %d까지의 합은 %d입니다.", num, result);

    return 0;
}