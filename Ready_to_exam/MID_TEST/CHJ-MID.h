#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double divide(double x, double y) {     // 함수의 정의(11 형태)
    double val;
    val = x / y;
    return val;
}

double input(void) {        // 함수의 정의(10 형태)
    double val;
    scanf("%lf", &val);
    return val;
}

void output(double x) {     // 함수의 정의(01 형태)
    printf("결과: %lf\n", x);
    return;
}

void information(void) {        // 함수의 정의(00 형태)
    printf("--- 프로그램 시작 ---\n");
    return;
}