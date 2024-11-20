// Call by value의 문제 함수 인자 전달에 사용되는 매개 변수가 많다.
// 배열로 만들어서 포인터 변수를 사용하는게 효율적임

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(int a1, int a2, int a3, int a4, int a5, int a6, int a7);

int main(void) {
    int a = 10, b = 20, c = 30, d = 40, e = 50, f = 60, g = 70;
    func(a, b, c, d, e, f, g);
    return 0;
}

void func(int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
    printf("%d %d %d %d %d %d %d\n", a1, a2, a3, a4, a5, a6, a7);
}