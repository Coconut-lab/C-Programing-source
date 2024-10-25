#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char ch;
    printf("문자를 입력하세요: ");
    scanf("%c", &ch);

    printf("문자 %c의 아스키 코드는 %d 입니다.\n", ch, ch);

    return 0;
}