#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch[100];
    int lower = 0, upper = 0;

    printf("문자열 입력: ");
    gets(ch);
    printf("입력한 문자열: %s\n", ch);

    for (int i = 0; i < sizeof(ch); i++) {
        if (ch[i] == '\0') {
            break;
        }
        if (isupper(ch[i])) {
            upper++;
        } else if (islower(ch[i])) {
            lower++;
        }
    }

    printf("소문자 개수: %d\n", lower);
    printf("대문자 개수: %d\n", upper);
    
    return 0;
}