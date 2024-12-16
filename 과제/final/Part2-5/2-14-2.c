#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void init(int* p, int num);
void change(int* p, int index, int num);

int main(void) {
    int arr[3];
    int index;
    int value;

    init(arr, sizeof(arr) / sizeof(int));

    printf("1. 배열의 초기화: ");
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        printf("arr[%d] = %d ", i, arr[i]);
    }
    printf("\n2. 배열의 값 입력\n");

    printf("배열의 인덱스: ");
    scanf("%d", &index);

    printf("배열의 값: ");
    scanf("%d", &value);

    printf("3. 결과 출력:");
    change(arr, index, value);

    return 0;
}

void init(int* p, int num) {
    for (int i = 0; i < num; i++) {
        p[i] = 0;
    }
}

void change(int* p, int index, int num) {
    p[index] = num;

    for (int i = 0; i < 3; i++) {
        printf("arr[%d] = %d ", i, p[i]);
    }
    printf("\n");
}