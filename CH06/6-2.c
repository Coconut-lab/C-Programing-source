#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main(void) {
    fprintf(stdout,"char의 최솟값 %d, 최댓값 %d\n", CHAR_MIN, CHAR_MAX);
    fprintf(stdout,"short의 최솟값 %d, 최댓값 %d\n", SHRT_MIN, SHRT_MAX);
    fprintf(stdout,"int의 최솟값 %d, 최댓값 %d\n", INT_MIN, INT_MAX);
    fprintf(stdout,"long의 최솟값 %d, 최댓값 %d\n", LONG_MIN, LONG_MAX);

    return 0;
}