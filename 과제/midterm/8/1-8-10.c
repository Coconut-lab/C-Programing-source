#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int menu;

    while (1) {
        printf("메뉴를 입력하세요(1: 절대값 변환, 2: 대소문자 변환): ");
        scanf("%d", &menu);

        if (menu == 1) {
            int num, result;

            printf("정수를 입력하세요: ");
            scanf("%d", &num);

            if (num < 0) {
                result = -num;

                printf("입력: %d, 결과: %d\n", num, result);
                printf("--------------------\n");
            } else {
                result = num;

                printf("입력: %d, 결과: %d\n", num, result);
                printf("--------------------\n");
            }
        } else if (menu == 2) {
            char ch;
            char result;

            printf("영문자를 입력하세요: ");
            scanf(" %c", &ch);

            if (ch >= 'A' && ch <= 'Z') {
                result = ch + 32;

                printf("입력: %c, 결과: %c\n", ch, result);
                printf("--------------------\n");
            } else if (ch >= 'a' && ch <= 'z') {
                result = ch - 32;

                printf("입력: %c, 결과: %c\n", ch, result);
                printf("--------------------\n");
            } else {
                printf("영문자를 입력해주세요.\n");
                printf("--------------------\n");
            }
        } else {
            printf("종료\n");
            break;
        }
    }

    return 0;
}