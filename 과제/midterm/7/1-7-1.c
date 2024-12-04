#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num = 0;
    int result = 0;

    while (num != -1) {
        result += num;
        printf("숫자를 입력하세요(종료: -1): ");
        scanf("%d", &num);
    }

    printf("입력한 숫자의 총 합은 %d입니다.\n", result);
    return 0;
}