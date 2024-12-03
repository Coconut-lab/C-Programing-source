// strlen 함수는 문자열의 끝을 알리는 종료문자(‘\0)는 길이에 포함되지 않는다

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void) {
    char array1[] = "Hello C";
    char array2[] = "안녕하세요";

    printf("영문 문자열의 길이: %d\n", strlen(array1));  // 7       strlen은 함수
    printf("한글 문자열의 길이: %d\n", strlen(array2));  // 15      '\0' 제외

    printf("영문 문자열의 크기: %d\n", sizeof(array1));  // 8       sizeof는 연산자
    printf("한글 문자열의 크기: %d\n", sizeof(array2));  // 11      '\0' 포함

    return 0;
}