// for문 2개로 입력받기
// for문 2개로 출력하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // 2차원 배열 선언
    int array[4][3];    // 4행 3열의 배열 길이 선언

    array[0][0] = 1; array[0][1] = 2; array[0][2] = 3;
    array[1][0] = 4; array[1][1] = 5; array[1][2] = 6;
    array[2][0] = 7; array[2][1] = 8; array[2][2] = 9;
    array[3][0] = 10; array[3][1] = 11; array[3][2] = 12;

    printf("%d %d %d\n", array[0][0], array[0][1], array[0][2]);
    printf("%d %d %d\n", array[1][0], array[1][1], array[1][2]);
    printf("%d %d %d\n", array[2][0], array[2][1], array[2][2]);
    printf("%d %d %d\n", array[3][0], array[3][1], array[3][2]);

    return 0;
}