#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int arr[4] = { 10, 20, 30, 40 };
    int* p = NULL;
    int** pp = NULL;

    pp = &p;
    p = &arr;

    printf("[1. 주소 비교]\n");
    printf("배열의 주소: ");
    for (int i = 0; i < 4; i++) {
        printf("&arr[%d] = %x ", i, &arr[i]);
        arr[i] = i * 10;
    }

    printf("\n1차원 포인터의 주소: ");
    printf("&p = %x *&p = %x\n", &p, *&p);
    printf("2차원 포인터의 주소: ");
    printf("&pp = %x *&pp = %x\n", &pp, *&pp);

    printf("\n[2, 1차원 포인터를 이용한 배열의 값 저장]\n");
    for (int j = 0; j < 4; j++) {
        printf("arr[%d] = %d ", j, arr[j]);
    }

    printf("\n[3, 2차원 포인터를 이용한 배열의 값 출력]\n");
    for (int k = 0; k < 4; k++) {
        printf("arr[%d] = %d ", k, *(*pp + k));
    }

    return 0;
}