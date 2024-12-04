#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char ch1[5] = "1234", ch2[5] = "4321";
    printf("문자열 %s와 %s의 숫자 합은 %d입니다.\n", ch1, ch2, atoi(ch1) + atoi(ch2));

    return 0;
}