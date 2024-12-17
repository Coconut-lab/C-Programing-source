#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, num = 1;
    printf("배열의 크기를 입력하세요: ");
    scanf("%d", &n);

    int arr[n][n];
    int *p = NULL;
    p = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = num;
            num++;
        }
    }

    // 배열 출력
    printf("\n- 배열의 요소 -\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n배열의 대각선 요소: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][i]);
    }
    printf("\n");

    free(p);
    p = NULL;
    
    return 0;
}