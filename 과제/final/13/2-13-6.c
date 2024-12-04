#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int ary[3][3];
    int(*p) [3] = NULL;

    printf("정수 입력: ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &ary[i][j]);
        }
    }

    p = ary;
    printf("출력\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%3d", p[i][j]);
        }
        printf("\n");
    }

    return 0;
}