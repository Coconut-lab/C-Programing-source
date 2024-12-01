#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>

int main(void) {
    printf("float의 최솟값 %e, 최댓값 %e\n", FLT_MIN, FLT_MAX);
    printf("double의 최솟값 %e, 최댓값 %e\n", DBL_MIN, DBL_MAX);
    printf("long double의 최솟값 %Le, 최댓값 %Le\n", LDBL_MIN, LDBL_MAX);

    return 0;
}