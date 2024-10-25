#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    
    int a, b;
    
    // 윈도우에서는 예시처럼 입력 (예 0xab 0xcd)
    // 맥에서는 예시처럼 입력 (예 ab cd)
    printf("16진수 숫자 2개를 입력하세요: ");
    scanf("%x %x", &a, &b);
    printf("%x(16) + %x(16) = %d(10)\n", a, b, a+b);

    return 0;
}







