#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char array[50];
    int num1 = 100;
    double num2 = 3.14;
    char str[50] = "good-morning";

    printf("%d, %lf, %s\n", num1, num2, str);   // 모니터 출력
    sprintf(array, "%d %lf %s", num1, num2, str); // 문자열 저장
    printf("%s\n", array); // 모니터 출력
    
    return 0;
}