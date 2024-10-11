#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char ch;

    // 65 ~ 90 and 97 ~ 122 알파벳
    printf("문자를 입력해주세요: ");
    scanf("%c", &ch);

    (65 <= ch && ch <= 90 || 97 <= ch && ch <= 122) ? printf("입력한 문자는 알파벳입니다.") : printf("입력한 문자는 알파벳이 아닙니다.");

    return 0;
}