#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num1, num2, num3, num4, num5;
    double max;

    /*
    180 / 200 * 100을 계산할 때
    정수끼리의 나눗셈 (180 / 200)은 0이 된다 (소수점 버림)
    0 * 100 = 0이 되어 잘못된 결과가 나온다
    따라서 180 / 200 * 100을 계산하고 싶다면
    (double)180 / 200 * 100으로 계산하여
    0.9 * 100 = 90이란 값을 구할 수 있다.
    */

    printf("점수를 입력하세요(양의 정수): ");
    scanf("%d", &num1);

    max = num1;

    printf("점수를 입력하세요(양의 정수): ");
    scanf("%d", &num2);

    if (num2 > max) {
        max = num2;
    }

    printf("점수를 입력하세요(양의 정수): ");
    scanf("%d", &num3);

    if (num3 > max) {
        max = num3;
    }

    printf("점수를 입력하세요(양의 정수): ");
    scanf("%d", &num4);

    if (num4 > max) {
        max = num4;
    }

    printf("점수를 입력하세요(양의 정수): ");
    scanf("%d", &num5);

    if (num5 > max) {
        max = num5;
    }

    num1 = (100 / max) * num1;
    num2 = (100 / max) * num2;
    num3 = (100 / max) * num3;
    num4 = (100 / max) * num4;
    num5 = (100 / max) * num5;

    printf("환산 점수는 %d, %d, %d, %d, %d 입니다.\n", num1, num2, num3, num4, num5);

    return 0;
}


