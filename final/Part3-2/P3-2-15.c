#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char* str1 = "3.14";
    char* str2 = "100";
    char* str3 = "100000000";

    double num1;
    int num2;
    long num3;

    num1 = atof(str1);
    num2 = atoi(str2);
    num3 = atol(str3);

    printf("%lf, %d %d\n", num1, num2, num3);
    
    return 0;
}