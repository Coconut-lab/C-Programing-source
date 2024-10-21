#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num;

    printf("자연수 n을 입력하세요: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        int is_prime = 1;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            if (i % 10 == 0) {
                printf("[%2d]\n", i);
            } else {
                printf(" [%2d] ", i);
            }
        } else {
            if (i % 10 == 0) {
                printf("  %2d\n", i);
            } else {
                printf("  %2d  ", i);
            }
        }
    }

    return 0;
}