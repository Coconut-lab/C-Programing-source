#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a;
    
    printf("나이를 입력하세요: __\b\b");
    scanf("%d", &a);
    printf("당신의 나이는 %d세 입니다.\n", a);
    
    return 0;
}

