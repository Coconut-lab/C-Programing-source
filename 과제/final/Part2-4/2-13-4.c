#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int inputAry(int* p, int size);
int printAry(int* p, int size);


int main(void) {
    int ary[3];

    inputAry(ary, sizeof(ary) / sizeof(ary[0]));
    printAry(ary, sizeof(ary) / sizeof(ary[0]));

    return 0;
}

int inputAry(int* p, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d 번째 요소를 입력하세요: ", i);
        scanf("%d", p + i);
    }
    return 0;
}

int printAry(int* p, int size) {
    printf("입렫받은 수: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
    return 0;
}