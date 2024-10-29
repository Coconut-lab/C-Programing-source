#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n) {
    // 종료 조건: n이 0이나 1이면 1을 반환
    if (n <= 1) {
        return 1;
    }
    // 재귀 호출: n * (n-1)!
    return n * factorial(n-1);
}

int main() {
    int number = 5;
    int result;

    result = factorial(number);

    printf("%d의 팩토리얼은 %d입니다.\n", number, result);
    return 0;
}
