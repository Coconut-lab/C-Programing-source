#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a = 0;
    int b = 1;

    printf("a의 값은 %d입니다.\n", a);
    printf("b의 값은 %d입니다.\n", b);

    a = a + 10;
    b = b + 10;

    printf("변경된 a의 값은 %d입니다.\n", a);
    printf("변경된 b의 값은 %d입니다.\n", b);

    return 0;
}