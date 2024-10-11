#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    printf("정수형 자료형\n");
    printf("char 자료형크기: %d\n", sizeof(char));
    printf("short 자료형크기: %d\n", sizeof(short));
    printf("int 자료형크기: %d\n", sizeof(int));
    printf("long 자료형크기: %d\n", sizeof(long));

    printf("\n실수형 자료형\n");
    printf("float 자료형크기: %d\n", sizeof(float));
    printf("double 자료형크기: %d\n", sizeof(double));
    printf("long double 자료형크기: %d\n", sizeof(long double));

    return 0;
}