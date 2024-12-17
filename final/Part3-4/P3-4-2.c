#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* p = NULL;
    p = (int*) malloc(4);   // 4바이트 크기의 메모리 할당

    if (p == NULL) {
        printf("힙 영역에 동적 메모리 할당 실패\n");
    }

    *p = 10;
    printf("주소: %x\n", p);
    printf("값: %d\n", *p);

    free(p);
    p = NULL;
    
    return 0;
}