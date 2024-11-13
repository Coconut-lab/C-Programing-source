#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char arr[12];
    char* cp = NULL;

    cp = arr;

    printf("문자열 입력(공백 불가): ");
    scanf("%s", cp);

    printf("문자열 출력: ");
    for (int i = 0; i < 12; i++) {
        if (cp[i] == '\0') {
            break;
        }
        printf("%c", cp[i]);
    }
    printf("\n");

    printf("\n문자 변경(a->?): ");
    for (int j = 0; j < 12; j++) {
        if (cp[j] == '\0') {
            break;
        } else if (cp[j] == 'a') {
            cp[j] = '?';
        }
        printf("%c", cp[j]);
    }
    printf("\n");

    return 0;
}