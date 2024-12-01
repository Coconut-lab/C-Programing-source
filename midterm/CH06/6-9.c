#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char val1;

    val1 = 'A';
    printf("%d %c\n", val1, val1);  // 65 A

    val1 = 'B';
    printf("%d %c\n", val1, val1);  // 66 B

    val1 = 'C';
    printf("%d %c\n", val1, val1);  // 67 C

    return 0;
}