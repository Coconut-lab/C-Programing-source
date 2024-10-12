#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void gugudan(int num) {
    while (1) {
        if (num == 0) {
            printf("숫자 입력을 종료합니다.\n");
            return;
        }

        if (num < 1 || num > 9) {
            printf("--------------------\n");
            printf("1부터 9 사이의 숫자를 입력하세요.\n");
            printf("--------------------\n");
        } else if (num % 2 == 0) {
            printf("--------------------\n");
            printf("다시 입력 하세요.\n");
            printf("--------------------\n");
        } else {
            printf("--------------------\n");
            for (int i = 1; i <= 9; i++) {
                printf("%d * %d = %d\n", num, i, num * i);
            }
            printf("--------------------\n");
        }

        printf("숫자 입력: ");
        scanf("%d", &num);
    }
}

int main() {
    int input;
    printf("숫자 입력: ");
    scanf("%d", &input);

    gugudan(input);

    return 0;
}