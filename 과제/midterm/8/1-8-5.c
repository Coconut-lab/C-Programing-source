#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num, change, count = 0;

    // 10,000원을 받는다는 가정하에 거스름돈의 개수 출력
    printf("계산 금액 입력: ");
    scanf("%d", &num);

    change = 10000 - num;

    while (change != 0) {
        if (change >= 1000) {
            count += change / 1000;
            change = change % 1000;
        } else if (change >= 500) {
            count += change / 500;
            change = change % 500;
        } else if (change >= 100) {
            count += change / 100;
            change = change % 100;
        } else if (change >= 50) {
            count += change / 50;
            change = change % 50;
        } else if (change >= 10) {
            count += change / 10;
            change = change % 10;
        } else if (change >= 1) {
            count += change / 1;
            change = change % 1;
        }
    }

    printf("잔돈의 개수는 %d개 입니다.\n", count);
    return 0;
}