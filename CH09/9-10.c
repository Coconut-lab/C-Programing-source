#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <time.h>
#define MAX 1000000

int main(void) {
    register int i;
    clock_t startTime, endTime, result;

    startTime = clock();
    for (i = 0; i < MAX; i++) {
        printf("%d\n", i);
    }
    endTime = clock();

    result = endTime - startTime;
    printf("레지스터 변수 속도: %lf초\n", (double)result/CLOCKS_PER_SEC);
    return 0;
}