#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double a, b;
    printf("사각형의 가로 길이를 입력하세요: ");
    scanf("%lf", &a);
    printf("사격형의 세로 길이를 입력하세요: ");
    scanf("%lf", &b);
    printf("가로 %lf, 세로 %lf인 사각형의 둘레는 %lf입니다.\n", a, b, 2*a + 2*b);
    
    return 0;
}
