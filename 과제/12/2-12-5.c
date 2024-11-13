#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int ranInputAry(int* p, int size);

int main(void) {
    int ary[5];

    ranInputAry(ary, sizeof(ary) / sizeof(ary[0]));
    printf("랜덤 생성된 배열의 요소: %3d %3d %3d %3d %3d\n", ary[0], ary[1], ary[2], ary[3], ary[4]);

    return 0;
}

int ranInputAry(int* p, int size) {
    for (int i = 0; i < size; i++) {
        *(p + i) = rand() % 100 + 1;
    }
    return 0;
}