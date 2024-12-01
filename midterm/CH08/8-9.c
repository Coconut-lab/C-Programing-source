// 논리 오류 발생
// else if 로 작동하도록

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num;
    printf("C언어 성적 입력: ");
    scanf("%d", &num);

    if (num >= 95) {
        printf("A+ 입니다.\n");
    }
    if (num >= 90) {
        printf("A 입니다.\n");
    }
    if (num >= 85) {
        printf("B+ 입니다.\n");
    }
    if (num >= 80) {
        printf("B 입니다.\n");
    } else {
        printf("F 입니다.\n");
    }

    return 0;
}