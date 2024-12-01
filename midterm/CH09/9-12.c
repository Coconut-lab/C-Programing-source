// 중요
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void self_service(void);

int main(void) {
    self_service();
    return 0;
}

void self_service(void) {
    // 제어문을 사용하여 재귀 호출을 제한한다.
    static int i = 0;
    if (i > 5) {
        return;
    }
    printf("셀프 서비스 %d회\n", i);
    i++;
    self_service();
}