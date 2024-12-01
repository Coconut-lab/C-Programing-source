// 내림차순 구구단
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i = 9;
    int j = 9;
    int result = 0;

    while (i > 1) {
        while (j >= 1) {
            result = i * j;
            printf("%d * %d = %d\n", i, j, result);
            j--;
        }
        i--;
        j = 9;
        printf("-------------------\n");
    }

    return 0;
}