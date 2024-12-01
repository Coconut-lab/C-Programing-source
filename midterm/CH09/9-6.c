#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i = 0;
    // int total = 0;      // 전역변수 total 선언

    for (i = 1; i < 3; i++) {
        int total = 0;      // 지역변수 total 선언
        total = total + i;
    }

    if (total < 10) {    // total 변수가 정의되지 않았다는 오류 발생
        printf("total 값은 %d입니다.\n", total);
    }

    return 0;
}