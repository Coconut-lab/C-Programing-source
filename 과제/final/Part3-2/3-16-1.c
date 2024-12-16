#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void) {
    char name[MAX];
    printf("이름 입력: ");
    gets(name);

    puts("한 글자씩 출력:");
    for (int i = 0; i < strlen(name); i++) {
        printf("%c\n", name[i]);
    }

    return 0;
}