#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int initArray(int arr[]);

int main(void) {
    int num[5];

    printf("초기화 하기 전 배열 값\n");
    for (int i = 0; i < 5; i++) {
        printf("%d", num[i]);
        printf(" | ");
    }

    printf("\n초기화 한 후 배열의 값\n");
    initArray(num);
    return 0;
}

int initArray(int arr[]) {
    for (int i = 0; i < 5; i++) {
        arr[i] = 0;
        printf("%d", arr[i]);
        printf(" | ");
    }
    printf("\n");
    return 0;
}