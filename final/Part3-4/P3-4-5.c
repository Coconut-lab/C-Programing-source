#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* p1 = (int*) calloc(1, sizeof(int));
    int* p2 = (int*) malloc(4);

    printf("p1 값: %d\n", *p1);
    printf("p2 값: %d\n", *p2);

    free(p1);
    free(p2);

    p1 = NULL;
    p2 = NULL;
    
    return 0;
}