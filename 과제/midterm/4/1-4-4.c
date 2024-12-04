#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a;
    
    printf("만두 개수를 입력하세요: ");
    scanf("%d", &a);
    printf("총 가격은 %d원 입니다.\n", a * 800);
    
    return 0;
}


