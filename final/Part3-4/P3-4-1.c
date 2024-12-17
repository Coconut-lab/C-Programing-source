#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a = 10;         // 데이터 영역에 저장됨 (전역 변수)

int main(void) {
    int num1 = 10, num2 = 20;   // 스택 영역에 저장됨 (지역 변수)
    static int s = 20;          // 데이터 영역에 저장됨 (정적 변수)

    printf("데이터 출력: %d %d %d %d\n", a, num1, num2, s);      // 데이터 출력
    printf("코드 영역: %x %x\n", main, printf);     // main 함수와 printf 함수의 주소 출력
    printf("스택 영역: %x %x\n", &num1, &num2);    // num1과 num2의 주소 출력
    printf("데이터 영역: %x %x\n", &a, &s);       // a와 s의 주소 출력

    return 0;
}