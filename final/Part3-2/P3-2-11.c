#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char a1 = 'A', a2 = 'a', a3 = 'B';
    int result1, result2, result3;

    result1 = isalnum(a1);
    result2 = isupper(a2);
    result3 = islower(a3);

    printf("%d %d %d\n", result1, result2, result3);

    return 0;
}