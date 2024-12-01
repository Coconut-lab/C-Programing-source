#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char c = 'A';
    char* cp = NULL;

    cp = &c;

    printf("%x %c %c\n", &c, c, *&c);
    printf("%x %x %x\n", &cp, cp, *&cp);

    printf("%c\n", c);  // 직접 접근
    printf("%c\n", *cp); // 간접 접근

    return 0;
}