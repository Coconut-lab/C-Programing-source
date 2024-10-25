#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    
    int a;
    
    printf("숫자를 입력하세요: ");
    scanf("%d", &a);
    printf("입력한 숫자(10잔수): %d\n", a);
    printf("입력한 숫자(8잔수): %o\n", a);
    printf("입력한 숫자(16잔수): %x\n", a);

    return 0;
}






