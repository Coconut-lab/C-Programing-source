#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    
    int a;
    
    printf("8진수를 입력하세요: ");
    scanf("%o", &a);
    printf("입력한 숫자는 10진수로 %d입니다.\n", a);

    return 0;
}

