#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num, one_year, two_years;

    printf("차음 입금했을 때의 금액: ");
    scanf("%d원", &num);

    one_year = num + (num * 0.02);
    two_years = one_year + (one_year * 0.02);


    printf("1년 후의 금액: %d원\n", one_year);
    printf("2년 후의 금액: %d원\n", two_years);

    return 0;
}