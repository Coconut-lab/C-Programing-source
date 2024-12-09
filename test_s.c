#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int ary[2][2] = {1, 2, 3, 4};

    printf("%d\n", *(*(ary+1)+1));

    return 0;
}