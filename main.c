#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num, i;
    int ary[10] = { 1,2,5,6,8,9,11,31,26,29 };

    printf("검색할 숫자를 입력하세요: ");
    scanf("%d", &num);

    printf("숫자 %d는 배열에 ", num);
    for (i = 0; i < 10; i++)
    {
        if (ary[i] == num)
        {
            printf("존재합니다.");
            break;
        }
    }
    if (i == 10)
    {
        printf("존재하지 않습니다.");
    }

    return 0;
}