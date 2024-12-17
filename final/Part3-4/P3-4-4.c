#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* p = (int*)calloc(sizeof(int),sizeof(int));

    if (p == NULL) {
        printf("힙 영역에 동적 메모리 할당 실패\n");
    }

    for (int i = 0; i < 4; i++) {
        p[i] = i;       // *(p + i) = i;
        printf("주소: %x\n", &p[i]);
        printf("값: %d\n", p[i]);
    }

    free(p);
    p = NULL;
    
    return 0;
}