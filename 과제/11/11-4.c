#include <stdio.h>

int main(void) {
    int ary[4][4];

    for(int i = 0; i < 4; i++) {
        ary[0][i] = i * i;  // 첫 행
        ary[i][0] = i * i;  // 첫 열
    }

    for(int i = 1; i < 4; i++) {
        for(int j = 1; j < 4; j++) {
            ary[i][j] = ary[i][0] - ary[0][j];
        }
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%2d ", ary[i][j]);
        }
        printf("\n");
    }

    return 0;
}