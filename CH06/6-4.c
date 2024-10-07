#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char num1 = -129;   // 최솟값 (-128) 보다 -1 만큼 작은 값 저장 (언더플로우)
    char num2 = 128;    // 최댓값 (127) 보다 +1 만큼 큰 값 저장 (오버플로우)

    fprintf(stdout,"%d\n", num1);   // 127 출력
    fprintf(stdout,"%d\n", num2);   // -128 출력

    num1 = -130;        // 최솟값 (-128) 보다 -2 만큼 작은 값 저장 (언더플로우)
    num2 = 129;         // 최댓값 (127) 보다 +2 만큼 작은 값 저장 (오버플로우)

    fprintf(stdout,"%d\n", num1);   // 126 출력
    fprintf(stdout,"%d\n", num2);   // -127 출력

    return 0;
}