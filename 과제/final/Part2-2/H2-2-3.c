#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char str[255];

    printf("영어 단어를 입력하세요: ");
    scanf("%s", str);

    printf("입력한 단어는 '%s'입니다.\n", str);
    
    return 0;
}