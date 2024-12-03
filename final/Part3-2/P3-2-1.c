#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(void) {
    char array1[MAX];
    char array2[MAX] = "Good luck";

    puts("문자열을 입력하세요: ");
    gets(array1);   // 문자열 입력
    puts(array1);   // 문자열 출력

    puts(array2);   // 문자열 출력
    puts(&"Good luck");  // 문자열 출력 (주소) array2와 다른 데이터

    return 0;
}