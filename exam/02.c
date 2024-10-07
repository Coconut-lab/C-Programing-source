#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>     // 최대 최소 CHAR_MAX
#include <string.h>     // strcpy()  함수가 선언된 헤더 파일


int main(void) {
    char diary[CHAR_MAX];           // 최대 크기로 char형 배열을 선언
    char copy_diary[CHAR_MAX];      // 최대 크기로 char형 배열을 선언

    printf("[입력]\n");
    scanf("%[^\n]s", diary);        // 서식 지정자 %[^\n]s 필수
    printf("[작성된 일기]\n%s\n", diary);
    strcpy(copy_diary, diary);      // diary 문자열을 copy_diary로 복사
    printf("[복사된 일기]\n%s\n", copy_diary);

    return 0;
}
