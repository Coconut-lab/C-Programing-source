// Call by Value와 Call by Address를 혼용해서 사용한 코드

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(int* p, int num); // 함수의 선언, 01 형태

int main(void) {
    int array [] = {10, 20, 30, 40, 50, 60, 70};
    func(array, sizeof(array) / sizeof(int));
    return 0;
}

void func(int* p, int num) {
    for (int i = 0; i < num; i++) {
        printf("%d %d\n", p[i], *(p + i));  // p[i] == *(p + i)
    }
}