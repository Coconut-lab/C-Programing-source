#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char str[];

    printf("영어 단어를 입력하세요: ");
    scanf("%s", str);

    printf("%d", sizeof(str));

    return 0;
}