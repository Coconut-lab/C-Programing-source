#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a;
    
    printf("공부한 날 수를 입력하세요: ");
    scanf("%d", &a);
    printf("공부 %d일 째의 예상 토익점수는 %d점 입니다.\n", a, 400 + (a * 15));
    
    return 0;
}

