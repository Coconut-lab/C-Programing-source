// 문제로 나올 수 있음

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int array[3] = {87, 65, 78};
    int i, total = 0;

    for(i = 0; i < 3; i++) {
        total += array[i];
        printf("배열의 요소 array[%d]은 %d입니다.\n", i, array[i]);
    }

    printf("총점은 %d 이고, 평균은 %.2lf입니다.\n", total, (double)total / 3);

    return 0;
}