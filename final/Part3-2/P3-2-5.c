#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char array1[6] = "Hello";
    char array2[3];

    strncpy(array2, array1, 3); // 3개 문자 복사
    array2[2] = "\0";   // 종료 문자 삽입

    puts(array2);
    
    return 0;
}