#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int age;

    printf("나이 입력: ");
    scanf("%d", &age);

    if (age >= 15 && age <= 100) {  // 15세 이상 100 이하
        printf("회원 가입이 가능합니다.\n");
    } else {
        printf("회원 가입이 불가능합니다.\n");
    }
    return 0;
}