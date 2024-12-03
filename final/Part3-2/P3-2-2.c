#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100

int main(void) {
    char array1[MAX];
    char array2[MAX];

    gets(array1);               // what is your name? 입력
    puts(array1);               // what is your name? 출력

    scanf("%s", array2);        // what is your name? 입력 (띄어쓰기 == 종료문자)
    printf("%s\n", array2);     // what 출력

    return 0;
}