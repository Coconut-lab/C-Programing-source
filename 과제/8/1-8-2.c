// 보류

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num1 = 0, num2 = 0;

    for (int i = 0; i < 5; i++) {
        printf("정수를 입력하세요: ");
        scanf("%d", &num1);

        if (num1 >= num2) {
            num2 = num1;
        }
    }

    printf("두번째로 작은 수: %d\n", num1);

    return 0;
}