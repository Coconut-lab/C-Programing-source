#include <stdio.h>

int main(void) {
    int ary[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            ary[i][j] = (i + j) * (i - j);
        }
    }

    // 배열 출력
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%3d ", ary[i][j]);
        }
        printf("\n");
    }

    return 0;
}