#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void initArray(int* array);

int main()
{
    int ary[5];
    int i;

    printf("초기화 하기 전 배열 값 :");
    for (i = 0; i < 5; i++)
    {
        printf("%d | ", ary[i]);
    }

    initArray(ary);

    return 0;
}

void initArray(int* array)
{
    int i;

    printf("\n초기화 한 후 배열의 값 :");
    for (i = 0; i < 5; i++)
    {
        array[i] = 0;
        printf("%d | ", array[i]);
    }

}