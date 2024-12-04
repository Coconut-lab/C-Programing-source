#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;

    printf("2~9 사이의 정수를 입력하세요: ");
    scanf("%d", &num);

    for (int i = 1; i <= 9; i++) {
        for (int j = num; j <= 9; j++) {
            printf("%d * %d = %2d ", j, i, j * i);
        }
        printf("\n");
    }

    return 0;
}