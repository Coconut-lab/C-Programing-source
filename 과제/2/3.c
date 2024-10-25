#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    
    int a, b;
    
    printf("수식을 입력하세요: ");
    scanf("%d+%d", &a, &b);
    printf("답: %d\n", a + b);
    return 0;
}
