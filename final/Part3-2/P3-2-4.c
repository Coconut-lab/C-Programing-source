#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char array1[12] = "Hello world";
    char array2[12];
    char array3[12];

    strcpy(array2, array1);
    strncpy(array3, array1, 12);
    // strlen 은 종료 문자 제외하고 카운트함
    // strncpy(array3, array1, strlen(array1) + 1); // 종료 문자까지 포함하기 위해 +1 함
    // strncpy(array3, array1, sizeof(array1)); // sizeof()로 배열의 크기를 구함

    puts(array2);
    puts(array3);
    
    return 0;
}