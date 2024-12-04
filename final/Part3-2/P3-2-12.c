// argv

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char array[50] = "100 3.14 good-morning";
    int num1;
    double num2;
    char str[50];

    // scanf("%d %lf %s", &num1, &num2, str); // 키보드 입력
    sscanf(array, "%d %lf %s", &num1, &num2, str); // 문자열 입력

    puts("출력 ");
    printf("%d, %lf, %s\n", num1, num2, str);
    
    return 0;
}