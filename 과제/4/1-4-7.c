#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b;
    
    printf("8진수를 입력하세요: ");
    scanf("%o", &a);
    printf("16진수를 입력하세요: ");
    scanf("%x", &b);
    printf("입력한 8진수 %o와 16진수 %x를 더한 십진수는 %d입니다.\n", a, b, a + b);
    
    return 0;
}


