#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char array1[20] = "Good-morning";
    char array2[20] = "Good-afternoon";
    char array3[20] = "Good-evening";
    int result1, result2, result3;

    result1 = strcmp(array1, array2);
    result2 = strncmp(array2, array3, 5);
    result3 = strcmp(array2, array3);

    printf("%d %d %d\n", result1, result2, result3);
    
    return 0;
}