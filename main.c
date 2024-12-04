#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int ary[5];
    int num;
    int small = 0, big = 0;

    for (int i = 0; i < sizeof(ary) / sizeof(int); i++) {
        printf("숫자를 입력하세요: ");
        scanf("%d", &num);

        if (i == 0) {
            small = num;
            big = num;
        } else {
            if (num < small) {
                small = num;
            }
            if (num > big) {
                big = num;
            }
        }
    }

    printf("입력한 수의 최솟값은 %d, 최댓값은 %d 입니다.\n", small, big);
}