#define _CRT_SECURE_NO_WARNiNGS
#include <stdio.h>
#include <string.h>
#define MAX 100
int main(void)
{
    char diary[MAX];
    char copy_diary[MAX];


    printf("[입력]");
    gets(diary);

    printf("[작성된 일기]");
    puts(diary);
    strcpy(copy_diary,diary);

    printf("[복사된 일기]");
    printf("%s",copy_diary);

    return 0;
}