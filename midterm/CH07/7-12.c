// 오름차순 계산이 아닌 내림차순으로 계산

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i = 1, factorial = 1;

    for (; i <= 10; i++) {      // 초기값이 없는 경우
        factorial *= i;
    }

    printf("1부터 10까지의 곱: %d is %d\n", i, factorial);
    return 0;
}