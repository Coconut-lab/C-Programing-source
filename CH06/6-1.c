#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char num1 = 10;
    short num2 = 20;
    int num3 = 30;
    long num4 = 40;

    fprintf(stdout,"\n------정수형 자료형과 변수의 메모리 크기-------\n");
    fprintf(stdout,"char형의 크기 %d 바이트, %d 바이트\n", sizeof(char), sizeof(num1));
    fprintf(stdout,"short형의 크기 %d 바이트, %d 바이트\n", sizeof(short), sizeof(num2));
    fprintf(stdout,"int형의 크기 %d 바이트, %d 바이트\n", sizeof(int), sizeof(num3));
    fprintf(stdout,"long형의 크기 %d 바이트, %d 바이트\n", sizeof(long), sizeof(num4));

    float num5 = 3.14;
    double num6 = 3.15;
    long double num7 = 3.17;

    fprintf(stdout,"\n------실수형 자료형과 변수의 메모리 크기-------\n");
    fprintf(stdout,"float형의 크기 %d 바이트, %d 바이트\n", sizeof(float), sizeof(num5));
    fprintf(stdout,"double형의 크기 %d 바이트, %d 바이트\n", sizeof(double), sizeof(num6));
    fprintf(stdout,"long double형의 크기 %d 바이트, %d 바이트\n", sizeof(long double), sizeof(num7));

    return 0;
}