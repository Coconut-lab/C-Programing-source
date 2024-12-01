#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int array[2][2] = {10, 20, 30, 40};

    printf("%d %d\n", *&array[0][0], *&array[0][1]);
    printf("%d %d\n", *&array[1][0], *&array[1][1]);

    printf("--------------------\n");
    printf("%d %d\n", *array[0] + 0, *array[0] + 1);    // array[0] == &array[0][0]
    printf("%d %d\n", *array[1] + 0, *array[1] + 1);    // array[1] == &array[1][0]

    printf("--------------------\n");
    printf("%d %d\n", **(array + 0) + 0, **(array + 0) + 1);    // array + 0 == array[0]
    printf("%d %d\n", **(array + 1) + 0, **(array + 1) + 1);    // array + 1 == array[1]

    return 0;
}