#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14

int main(void)
{
    double a;
    double Aresult, Bresult;
    
    printf("원의 반지름을 입력하세요: ");
    scanf("%lf", &a);
    
    Aresult = 2 * PI * a;
    Bresult = PI * (a * a);
    
    printf("원의 넓이: %lf\n", Bresult);
    printf("원의 둘레: %lf\n", Aresult);
    
    return 0;
}

