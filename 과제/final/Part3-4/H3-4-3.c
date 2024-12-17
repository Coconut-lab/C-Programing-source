#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *num = NULL;
    int n, total = 0;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    num = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("숫자 입력: ");
        scanf("%d", &num[i]);
        total += num[i];
    }

    printf("입력한 숫자: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }

    printf("\n총합: %d, 평균: %.1lf\n", total, (double)total / n);

    free(num);
    num = NULL;

    
    return 0;
}