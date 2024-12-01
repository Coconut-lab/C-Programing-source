#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num = 0;
    int count = 0;

    /*
    while (num <= 4) {
        printf("반복 내용: %d\n", num);
        num++;
    }
    */

    for (num = 0; num <=4; num++) {
        count++;
        printf("반복 내용: %d\n", num);
    }


    printf("반복문을 종료한 후: %d\n", num);
    printf("총 갯수: %d\n", count);

    return 0;
}