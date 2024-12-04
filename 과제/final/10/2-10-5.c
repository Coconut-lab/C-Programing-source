#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num[5];
    int max, min;

    for (int i = 0; i < 5; i++) {
        printf("숫자를 입력하세요: ");
        scanf("%d", &num[i]);

        // 최댓값, 최솟값 알고리즘
        if (i == 0) {
            max = num[i];
            min = num[i];
        }
        else {
            if (num[i] > max) {
                max = num[i];
            }
            if (num[i] < min) {
                min = num[i];
            }
        }
    }

    printf("입력한 수의 최솟값은 %d이고, 최댓값은 %d입니다.\n", min, max);
    return 0;
}