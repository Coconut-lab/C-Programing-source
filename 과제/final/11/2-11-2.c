#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int arr[2][2] = {1, 2, 3, 4};

    printf("배열의 주소 출력\n");
    for (int i = 0; i < sizeof(arr[2]) / sizeof(int); i++) {
        for (int j = 0; j < sizeof(arr[2]) / sizeof(int); j++) {
            printf("%d행%d열: %#p %#p %#p\n", i, j, &arr[i][j], &(*(&arr[i][j])), arr[i] + j);
        }
    }

    printf("\n배열의 값 출력\n");
    for (int i = 0; i < sizeof(arr[2]) / sizeof(int); i++) {
        for (int j = 0; j < sizeof(arr[2]) / sizeof(int); j++) {
            printf("%d행%d열: %d %d %d\n", i, j, arr[i][j], *(&arr[i][j]), *(arr[i] + j));
        }
    }
    
    return 0;
}