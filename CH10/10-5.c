#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int array1[3] = {1, 2, 3};
    char array2[4] = {'A', 'B', 'C', '\0'};     // 수정된 코드

    printf("%x %x %x\n", &array1[0], &array1[1], &array1[2]);
    printf("%x %x %x\n", &array2[0], &array2[1], &array2[2]);

    printf("%x %x %x\n", array1, array1 + 1, array1 + 2);
    printf("%x %x %x\n", array2, array2 + 1, array2 + 2);

    return 0;
}