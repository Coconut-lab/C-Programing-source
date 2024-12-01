#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int array[3] = {1, 2, 3};

    printf("%x %x %x\n", array + 0, array + 1, array + 2);
    printf("%d %d %d\n", *(array + 0), *(array + 1), *(array + 2));
    printf("%d %d\n", *(array + 0), *array);

    return 0;
}