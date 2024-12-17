#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, total = 0;
    int *p = NULL;

    printf("원하는 입력 개수: ");
    scanf("%d", &n);

    p = (int*) malloc(sizeof(int));
    if (p == NULL) {
        printf("메모리 할당에 실패했습니다.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%d번째 숫자: ", i + 1);
        scanf("%d", &p[i]);
        total += p[i];
    }

    printf("입력 값의 총합: %d", total);

    free(p);
    p = NULL;
    
    return 0;
}