#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void self_service(int n);

int main(void) {
    int a = 1;
    self_service(a);
    return 0;
}

void self_service(int n) {
    if (n > 5) {
        return;
    }
    printf("셀프 서비스 %d\n", n);
    self_service(n + 1);
}