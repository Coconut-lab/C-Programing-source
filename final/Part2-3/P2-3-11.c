// 중요 코드
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char c = 'A';
    char* cp = NULL;
    char** cpp = NULL;

    cp = &c;
    cpp = &cp;

    printf("%x %x %x\n", &c, &cp, &cpp);
    printf("%x %x %x\n", &c + 1, &cp + 1, &cpp + 1);

    printf("%c %x %x\n", c, cp, cpp);
    printf("%c %x %x\n", c + 1, cp + 1, cpp + 1);

    return 0;
}