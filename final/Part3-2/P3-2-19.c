#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 10000

int main(void) {
    int i = 0;
    puts("10개의 난수를 발생시킵니다. ");
    srand(1);   // 정수 값을 1 ~ 3 까지 변경해 보자 (패턴 발생)

    while (i < MAX) {
        printf("%d\t", rand());
        i++;
    }
    
    return 0;
}