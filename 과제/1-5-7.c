#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num;

    printf("목표 성적을 입력하세요.\n");
    scanf("%d", &num);

    printf("%s\n", num >= 60 ? "PASS" : "FAIL");

    return 0;
}