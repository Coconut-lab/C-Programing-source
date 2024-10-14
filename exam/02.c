#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>     // strcpy()  함수가 선언된 헤더 파일
#define MAX 100

int main(void) {
    char diary[MAX];
    char copy_diary[MAX];

    printf("[입력]\n");
    scanf("%[^\n]s", diary);        // 서식 지정자 %[^\n]s 필수
    printf("[작성된 일기]\n%s\n", diary);
    strcpy(copy_diary, diary);      // diary 문자열을 copy_diary로 복사
    printf("[복사된 일기]\n%s\n", copy_diary);

    return 0;
}
