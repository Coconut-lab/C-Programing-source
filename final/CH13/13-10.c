#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* string1(void);
char* string2(void);

int main(void) {
    char* p1 = NULL;
    char* p2 = NULL;

    p1 = string1();
    p2 = string2();

    printf("%s\n", p1);
    printf("%s\n", p2);

    printf("%s\n", p1 + 1);
    printf("%s\n", p2 + 1);

    printf("%c %c\n", *(p1 + 1), p1[1]);
    printf("%c %c\n", *(p2 + 1), p2[1]);
    return 0;
}

char* string1(void) {
    static char str[] = "Good";
    return str;
}

char* string2(void) {
    static char str[] = "morning";
    return str;
}