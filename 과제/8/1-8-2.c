#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num1 = 0, num2 = 0, temp;

    for (int i = 0; i < 5; i++) {
        printf("정수를 입력하세요: ");
        scanf("%d", &temp);

        if (num1 < temp) {
            num2 = num1;
            num1 = temp;
        } else if (num2 < temp) {
            num2 = temp;
        }
    }
    printf("두번째로 큰 수: %d\n", num2);

    return 0;
}