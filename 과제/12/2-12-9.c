#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* decrypt(char* str) {
    char* ptr = str;

    while (*ptr != '\0') {
        if(*ptr >= 'A' && *ptr <= 'Z') {
            *ptr = ((*ptr - 'A' + 23) % 26) + 'A';
        }
        else if(*ptr == ' ') {
            *ptr = ' ';
        }
        ptr++;
    }
    return str;
}

int main(void) {
    char input[100];
    char* result;

    printf("암호문을 입력하세요\n->");
    gets(input);
    // gets_s(input, sizeof(input)); // gets_s는 Visual Studio에서만 사용 가능

    result = decrypt(input);

    printf("\n해독된 암호문\n->");
    printf("%s\n", result);

    return 0;
}