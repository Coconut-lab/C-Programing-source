#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a;
    
    printf("킬로바이트(KB)를 입력하세요: ");
    scanf("%d", &a);
    printf("%d 킬로바이트(KB)는 %d 바이트(B) 입니다.\n", a, a * 1024);
    
    return 0;
}


