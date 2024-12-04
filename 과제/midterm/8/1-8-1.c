#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num, a = 1;

    printf("정수 입력: ");
    scanf("%d", &num);

    /*
    // 반복문만 사용
    for (int i = 1; i < num; i++) {
        printf("%d\n", i);
    }
    */

    // 반복문과 조건문 동시 사용
    while (a < num) {
        if (a < num) {
            printf("%d\n", a);
            a += 1;
        }
    }

    return 0;
}