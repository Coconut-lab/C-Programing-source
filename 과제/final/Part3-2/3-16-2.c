#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char array1[100] = "C Language";
    char array2[100] = "It is difficult";
    char array3[100];

    printf("array1: %s\n", array1);
    printf("array2: %s\n", array2);

    strcat(array3, array1);
    strncat(array3, array2 + 2, strlen(array2 + 2) + 1);
    printf("array1, array2 결합: %s\n", array3);

    
    return 0;
}