#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 자료형의 재정의
typedef int CHJ;

int main(void) {
    CHJ a, b;
    double c;

    // 엔터없이 입력하기 --10--3 이런식으로
    fscanf(stdin,"--%d--", &a);
    fscanf(stdin,"--%d--", &b);

    c = (double)a / (double)b;
    // fprintf(stdout,"%d\n", c);
    fprintf(stdout,"%lf\n", c);

    return 0;
}