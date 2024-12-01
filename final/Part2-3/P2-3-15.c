#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add(double num1, double num2);

int main(void) {
    double x = 3.1, y = 5.1;
    void (*pointer) (double, double);   // 함수 포인터 선언

    printf("add 함수의 주소: %x\n", add);
    printf("함수 포인터의 주소: %x\n", &pointer);

    pointer = add;  // 함수 포인터에 함수 주소 저장
    pointer(x, y);  // 함수 포인터로 함수 호출

    return 0;
}

void add(double num1, double num2) {
    double result;
    result = num1 + num2;
    printf("%lf + %lf = %lf 입니다.\n", num1, num2, result);
}