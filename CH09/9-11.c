#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void self_service(void);

int main(void) {
    self_service();
    return 0;
}

void self_service(void) {
    printf("셀프 서비스\n");
    self_service();
}