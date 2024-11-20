#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void init(int* p, int num);

int main(void) {
    int arr[3];
    int* p = NULL;

    p = arr;

    printf("배열의 초기화 전: ");
    for (int i = 0; i < 3; i++) {
        printf("arr[%d] = %d ", i, arr[i]);
    }

    init(p, 3);

    printf("\n배열의 초기화: ");
    for (int j = 0; j < 3; j++) {
        printf("arr[%d] = %d ", j, arr[j]);
    }
    printf("\n");

    return 0;
}

void init(int* p, int num) {
    for (int i = 0; i < num; i++) {
        p[i] = 0;
    }
}