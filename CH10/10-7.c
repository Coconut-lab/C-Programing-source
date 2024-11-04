#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char array[3] = {'A', 'B', 'C'};
    printf("%x %x %x\n", array + 0, array + 1, array + 2);

    return 0;
}