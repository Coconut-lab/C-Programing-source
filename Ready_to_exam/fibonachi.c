#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci(int n) {
    // 종료 조건
    if (n <= 1) {
        return n;
    }
    // 재귀 호출
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n = 6;
    printf("%d번째 피보나치 수: %d\n", n, fibonacci(n));
    return 0;
}