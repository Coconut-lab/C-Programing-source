#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int array[3] = {87, 99, 80};
    int total = 0;

    total = array[0] + array[1] + array[2];
    printf("총점은 %d이고, 평균은 %lf입니다.\n", total, (double)total / 3);

    return 0;
}