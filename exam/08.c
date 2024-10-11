#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num;

    printf("숫자 입력: ");
    scanf("%d", &num);

    while (1) {
        if (num % 2 == 0) {
            printf("다시 입력 하세요.");
        } else {
            printf("------------------\n");
            for (int i = 1; i < 10; i++) {
                printf("%d * %d = %d\n", num, i, i * num);
            }
            printf("------------------\n");
        }
    }

    return 0;
}