#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char array1[100];
    char array2[50];

    printf("첫 번쨰 문자열 입력: ");
    gets(array1);

    printf("두 번째 문자열 입력: ");
    gets(array2);

    strcat(array1, array2); // 문자열 결합
    strncat(array1, array2, 14); // 문자열 결합

    printf("결합된 문자열 출력: ");
    puts(array1);
    
    return 0;
}