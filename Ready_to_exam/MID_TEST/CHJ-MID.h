#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double divide(double x, double y) {     // �Լ��� ����(11 ����)
    double val;
    val = x / y;
    return val;
}

double input(void) {        // �Լ��� ����(10 ����)
    double val;
    scanf("%lf", &val);
    return val;
}

void output(double x) {     // �Լ��� ����(01 ����)
    printf("���: %lf\n", x);
    return;
}

void information(void) {        // �Լ��� ����(00 ����)
    printf("--- ���α׷� ���� ---\n");
    return;
}