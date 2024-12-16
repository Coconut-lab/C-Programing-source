#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

// 문자열을 반환하기 위해 포인터 변수 사용
char* menu(void);

int main(void) {
    char menu_num[10];

    while (1) {
        strcpy(menu_num, menu());

        if (strcmp(menu_num, "1") == 0) {
            printf("두 수의 덧셈을 수행하는 메뉴입니다.\n");
        } else if (strcmp(menu_num, "2") == 0) {
            printf("두 수의 곱셈을 수행하는 메뉴입니다.\n");
        } else {
            printf("잘못 입력하셨습니다.\n");
        }
    }
}

// 문자열을 반환하기 위해 포인터 변수 사용
char* menu(void) {
    static char ch[10];

    printf("============== MENU ==============\n");
    printf("1. 두 수의 덧셈.\n");
    printf("2. 두 수의 곱셈.\n");
    printf("메뉴 번호를 입력하세요: ");
    scanf("%s", ch);

    if (strcmp(ch, "exit") == 0) {
        printf("프로그램을 종료합니다...\n");
        return 0;
    }

    return ch;
}