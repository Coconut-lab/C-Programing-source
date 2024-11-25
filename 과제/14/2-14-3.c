#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ftn(int* p, int row, int column);

int main(void) {
    int arr[][3] = {1, 2, 3, 4, 5, 6};

    ftn(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]) / sizeof(int));

    return 0;
}

void ftn(int* p, int row, int column) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("arr[%d][%d] = %d ", i, j, *(p + i * column + j));
        }
        printf("\n");
    }
    printf("\n");
}