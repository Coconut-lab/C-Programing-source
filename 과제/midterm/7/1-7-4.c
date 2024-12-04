#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int heigh, day = 0;
    int result = 0;

    printf("우물의 높이를 입력하세요(cm): ");
    scanf("%d", &heigh);

    do {
        day++;
        result += 30;
        result -= (result < heigh) * 10;
    } while (result < heigh);

    printf("우물을 탈출하는데까지 걸린 시간은 %d일 입니다.\n", day);

    return 0;
}
