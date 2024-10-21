#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int split(int, int);

int main(void)
{
    int init, month = 12;
    printf("초기 미생물의 개체 수를 입력하세요 : ");
    scanf("%d", &init);

    int final = split(init, month);
    printf("최초 : %d 마리, 최종 : %d 마리\n", init, final);

    return 0;
}

int split(int init, int month) {
    if (month == 0) {
        return init/2;
    } else {
        return split(init * 2, month - 1);
    }
}