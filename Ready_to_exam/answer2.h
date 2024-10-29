#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int bigger(int a, int b) {
    return a > b ? a : b;
}

int biggerif(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

double average(int a, int b, int c) {
    double x;
    x = (a + b + c) / 3;
    return x;
}

int factorial(int a) {
    int result = 1;
    for (int i = 1; i <= a; i++) {
        result *= i;
    }
    return result;
}