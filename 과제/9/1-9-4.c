#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int checkInt(char);
int main(void) {
    char ch;

    printf("문자를 입력하세요: ");
    scanf("%c", &ch);
    checkInt(ch);

    return 0;
}

int checkInt(char ch) {
    if (ch >= '0' && ch <= '9') {
        return printf("입력한 문자 %c는(은) 숫자입니다.\n", ch);
    }
    else {
        return printf("입력한 문자 %c는(은) 숫자가 아닙니다.\n", ch);
    }
}