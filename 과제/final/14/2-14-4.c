#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* string1(void);
char* string2(void);

int main(void) {
    char* cp1 = NULL;
    char* cp2 = NULL;

    cp1 = string1();
    cp2 = string2();

    printf("%s %s\n", cp1, cp2);

    return 0;
}

char* string1(void) {
    static char arr1[] = "Hello";
    return arr1;
}

char* string2(void) {
    static char arr2[] = "C World";
    return arr2;
}