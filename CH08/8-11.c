#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char ch;

    while (1) {
        printf("(T)hursday, (F)riday, (S)aturday, (Q)uit\n");
        printf("문자 입력(T, F, S, Q 또는 t, f, s, q): ");
        scanf(" %c", &ch);  // 공백을 추가하여 이전의 newline 문자를 무시

        switch (ch) {
            case 'T':
            case 't':
                printf("Thursday\n");
                break;
            case 'F':
            case 'f':
                printf("Friday\n");
                break;
            case 'S':
            case 's':
                printf("Saturday\n");
                break;
            case 'Q':
            case 'q':
                printf("프로그램을 종료합니다.\n");
                return 0;
            default:
                printf("잘못 입력되었습니다.\n");
        }
    }
    return 0;
}