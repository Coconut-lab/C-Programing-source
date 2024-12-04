#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num;

    printf("2~9 사이의 정수를 입력하세요: ");
    scanf("%d", &num);

    /*
    // while for 섞어서 사용
    while (num <= 9) {
        for (int i = 0; i < 9; i++) {
            printf("%d * %d = %2d ", num, i + 1, num * (i + 1));
        }
        printf("\n");
        num += 1;
    }
    */

    // for for 사용
    for (int i = num; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d * %d = %2d ", i, j, i*j);
        }
        printf("\n");
    }


    return 0;
}