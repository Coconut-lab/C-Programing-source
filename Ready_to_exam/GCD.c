#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b) {
    // 종료 조건
    if (b == 0) {
        return a;
    }
    // 재귀 호출
    return gcd(b, a % b);
}

int main() {
    int a = 48, b = 18;
    printf("%d와 %d의 최대공약수: %d\n", a, b, gcd(a, b));
    return 0;
}