#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 10


int main(void) {
    int i = 0;
    puts("10개의 난수를 발생시킵니다.");

    while (i < MAX) {
        printf("%d\t", rand());
        i++;
    }
    return 0;
}