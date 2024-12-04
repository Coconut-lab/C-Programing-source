#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    
    // 맥 환경에서만 이런 모습이 나온다.
    // 윈도우 환경에서는 아무 문제없이 잘 출력됨
    printf("%10s %10s %10s\n", "날짜", "지출액", "남은금액");
    printf("%10s %10s %10s\n", "2017-09-14", "₩120,000", "₩120,000");
    printf("%10s %10s %10s\n", "2017-09-17", "₩50,000", "₩70,000");

    return 0;
}


