#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char array1[50] = "Good-morning, Good-afternoon, Good-evening";
    char array2[50] = "GOOD-MORNING, GOOD-AFTERNOON, GOOD-EVENING";
    char* p1 = NULL;
    char* p2 = NULL;

    p1 = strupr(array1);
    p2 = strlwr(array2);

    puts(p1);
    puts(p2);
    
    return 0;
}