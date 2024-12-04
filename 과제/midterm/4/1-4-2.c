#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double dal, won, yen, win;
    
    printf("달러를 입력허세요: ");
    scanf("%lf", &dal);
    
    won = 1130 * dal; 
    yen = 111 * dal;
    win = 6.5 * dal;
    
    printf("%.2lf달러는 %.2lf원, %.2lf엔, %.2lf위안 입니다.\n", dal, won, yen, win);
    
    return 0;
}


