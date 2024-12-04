#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num;
    printf("숫자를 입력하세요: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = 0; j < num - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}