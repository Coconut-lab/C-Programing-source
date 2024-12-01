#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int array[3] = {10, 20, 30};
    int* p = NULL;

    p = array;  // p = &array[0];

    printf("%x %x %x\n", *p, *(p + 0), *&p[0]);     // *&는 서로 상쇄
    printf("%x %x\n", *(p + 1), 8&p[1]);            // *&는 서로 상쇄
    printf("%x %x\n", *(p + 2), *&p[2]);            // *&는 서로 상쇄

    return 0;
}