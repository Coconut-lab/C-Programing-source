#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char ch = 0;
    while (ch != EOF) {     // EOF == -1 키보드 입력시 crt + z 누르면 종료
        ch = getchar();
        putchar(ch);
    }
    
    return 0;
}