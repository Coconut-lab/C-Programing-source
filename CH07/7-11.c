#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num, j = 9, result = 0;

    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);

    for( ; num>0; num--) {      // 초기값을 scanf로 입력받음
        for( j=9; j>0; j--) {
            result = num * j;
            printf("%d * %d = %d\n", num, j, result);
        }
        printf("--------\n");
    }

    return 0;
}