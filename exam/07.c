// 다시 풀기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char check(char ch);

int main(void) {
    char input;

    while (1) {
        printf("문자 입력: ");
        scanf("%c", &input);

        if (input >= '0' && input <= '9') {
            printf("반복 문장 입력을 종료합니다.\n");
            break;
        }

        char result = check(input);

        printf("변경 전: %c 변경 후: %c\n", input, result);
        printf("-------------------------------------------\n");
    }

    return 0;
}

char check(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + 32;
    } else if (ch >= 'a' && ch <= 'z') {
        return ch - 32;
    }
    return ch;
}