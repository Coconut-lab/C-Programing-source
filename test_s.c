#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int num;
    int ary[5];
    int max, min;
    max = min = ary[0];

    for(int i=0; i<5; i++)
    {
        printf("숫자를 입력하세요: ");
        scanf("%d", &num);
        ary[i] = num;

        if (ary[i] > max)
        {
            max = ary[i];
        }
        if (ary[i] < min)
        {
            min = ary[i];
        }
    }

    printf("입력한 수의 최솟값은 %d, 최댓갑은 %d 입니다.\n", min, max);
    return 0;
}