#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num;

    printf("5의 배수: \n");
    for (num = 1; num <= 100; num++) {  // 옆 코드와는 다르게 5의 배수 출력하기 (시험)
        if (num % 5 == 0) {
            printf("%3d\n", num);
        }
    }
    return 0;
}