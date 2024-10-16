#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num = 0, numnum = 0, result = 0;

    printf("숫자를 입력하세요: ");
    scanf("%d", &num);
    printf("거듭제곱할 지수를 입력하세요: ");
    scanf("%d", &numnum);

    result = num;
    for (int i = 1; i < numnum; i++) {
        result *= num;
    }

    printf("%d의 %d승은 %d입니다.\n", num, numnum, result);

    return 0;
}