// Call by value (copy and paste)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func(int i);    // 함수의 선언, 11 형태

int main(void) {
    int a = 10;
    int result = 0;

    result = func(a);   // 값에 의한 함수 호출
    printf("%d\n", result);
    printf("%d\n", a);

    return 0;
}

int func(int i) {   // 함수의 정의
    i = i + 1;
    return i;
}