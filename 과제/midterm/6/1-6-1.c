#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main(void) {
    printf("int형의 최솟값은 %d 입니다.\n", INT_MIN);
    printf("int형의 최대값은 %d 입니다.\n", INT_MAX);
    printf("unsigned int형의 최솟값은 %d 입니다.\n", 0);
    printf("unsigned int형의 최대값은 %d 입니다.\n", UINT_MAX);

    return 0;
}