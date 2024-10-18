// 보류

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// #include <Windows.h> // 윈도우 전용 sleep함수 단위 ms(마이크로초)
// #include <unistd.h> // 맥 전용 sleep함수 단위 s(초)
#include <time.h>

int main(void) {
    clock_t start, end;
    start = clock();
    for (int i = 0; i < 5000; i++) {
        printf("%d번째 출력!\n", i + 1);
    }
    end = clock();

    printf("\n실행 시간: %lf초\n", (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}