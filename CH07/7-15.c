#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num = 10;

    do {
        printf("%d", num);
        num++;
    } while (num < 10);

    printf("\n **while문을 종료합니다.** \n");

    return 0;
}