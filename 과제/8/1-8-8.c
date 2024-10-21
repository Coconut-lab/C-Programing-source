#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int year;

    printf("윤년 여부를 조사할 연도를 입력하세요(yyyy): ");
    scanf("%d", &year);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d년은 윤년입니다.\n", year);
    }
    else {
        printf("%d년은 윤년이 아닙니다.\n", year);
    }
}