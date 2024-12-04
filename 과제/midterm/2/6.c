#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    
    int a;
    
    printf("10진수를 입력하세요: ");
    scanf("%d", &a);
    printf("입력한 10진수는 16진수로 %x입니다.\n", a);

    return 0;
}


