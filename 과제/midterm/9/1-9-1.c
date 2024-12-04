#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu();
int main(void) {
    menu();
    return 0;
}

void menu(void) {
    printf("======== MENU ========\n");
    printf("1. 프로그램 시작\n");
    printf("0. 프로그램 종료\n");
    printf("----------------------\n");
}