#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i, j, k;
    int array[3][3][3] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9},
        {10, 11, 12, 13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24, 25, 26, 27}
    };

    for (i = 0; i < 3; i++) {   // 0면, 1면, 2면
        for (j = 0; j < 3; j++) {   // 0행, 1행, 2행
            for (k = 0; k < 3; k++) {   // 0열, 1열, 2열
                printf("%d ", array[i][j][k]);
            }
            printf("\n");
        }
        printf("---------------------\n");
    }

    return 0;
}