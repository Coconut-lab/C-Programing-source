#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int calculate(int num);
int main(void) {
    int num;
    printf("초기 미생물의 개체 수를 입력하세요: ");
    scanf("%d", &num);

    printf("최초: %d마리, 최종: %d마리\n", num, calculate(num));

    return 0;
}

int calculate(int num) {
    int month = 1;
    if (month == 12) {
        return num;
    }

    return calculate(num * 2);
}

