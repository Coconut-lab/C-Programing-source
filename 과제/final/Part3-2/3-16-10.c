#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char ch[100];

    printf("문자열 입력: ");
    gets(ch);

    for (int i = 0; i < sizeof(ch); i++) {
        if (ch[i] == '\0') {
            break;
        }
        if (isupper(ch[i])) {
            ch[i] = tolower(ch[i]);
        } else if (islower(ch[i])) {
            ch[i] = toupper(ch[i]);
        }
    }

    printf("변환된 문자열: %s\n", ch);

    return 0;
}