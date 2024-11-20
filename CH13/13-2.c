// call by Reference(address)
// 원본의 위치를 저장
// 중요한 코드이므로 이해하고 넘어가기
// 저장하고 참조하고 저장하고 참조하는 문제 예상

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func(int *i);    // 함수의 선언, 11 형태

int main(void) {
    int a = 10;
    int result = 0;

    result = func(&a);   // 주소에 의한 호출
    printf("%d\n", result);
    printf("%d\n", a);

    return 0;
}

int func(int* i) {      // 함수의 정의
    *i = *i + 1;
    return *i;
}