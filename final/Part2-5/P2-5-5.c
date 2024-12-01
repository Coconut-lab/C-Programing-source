#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(int* p);

int main(void) {
    int array[2][4] = {10, 20, 30, 40, 50, 60, 70, 80};
    func(array);
    return 0;
}

void func(int* p) {
    printf("%d %d %d %d %d %d %d %d \n", p[0],p[1],p[2],p[3],p[4],p[5],p[6],p[7]);
    printf("%d %d %d %d \n", p[0][0], p[0][1], p[0][2], p[0][3]); // 에러
    printf("%d %d %d %d \n", p[1][0], p[1][1], p[1][2], p[1][3]); // 에러
}