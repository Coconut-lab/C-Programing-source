#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i = 0, j = 0;

    while (i < 2) {
        printf("큰 반복문\n");
        while (j < 2) {
            printf("작은 반복\n");
            j++;
        }
        i++;
        j=0;    // 중요⭐️
    }
    return 0;
}
