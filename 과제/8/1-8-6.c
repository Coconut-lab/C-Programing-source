#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num, result = 0;

    while (1) {
        printf("숫자를 입력하세요(종료: -1): ");
        scanf("%d", &num);

        if (num == -1) {
            break;
        } else {
            result += num;
        }
    }

    printf("입력한 숫자의 총 합은 %d입니다.\n", result);

    return 0;
}