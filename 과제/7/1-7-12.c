#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char ch;

    printf("알파벳을 입력하세요: ");
    scanf("%c", &ch);

    printf("입력한 %c 이후의 알파벳은\n", ch);
    while (!(ch == 'z' | ch == 'Z')) {
        printf("%c, ", ++ch);
    }

    printf("\n입니다.\n");

    return 0;
}