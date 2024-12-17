#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 1000000

int main(void) {
    char ch[MAX];

    printf("문장 입력: ");
    gets(ch);

    printf("입렫한 문장: ");
    puts(ch);
    
    return 0;
}