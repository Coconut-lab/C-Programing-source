#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    printf("a를 대문자로 표현하면 %c 입니다.\n", 'A');
    printf("%s %c 입니다.\n", "a를 대문자로 표현하면", 'A');
    printf("%s %d %s\n", "2곱하기 3은", 2 * 3, "입니다.");

    return 0;
}