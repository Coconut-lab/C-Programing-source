#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a;
    
    printf("임의의 십진수를 입력하세요: ");
    scanf("%d", &a);
    printf("입력한 십진수 %d에 대응되는 ASCII 문자는 %c입니다.\n", a , a);
    
    return 0;
}


