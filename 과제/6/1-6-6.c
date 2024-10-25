#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num;

    printf("0~127 사이의 정수를 입력하세요: ");
    scanf("%d", &num);

    printf("%d의 아스키 코드 값을 갖는 문자는 %c입니다.\n", num, num);

    return 0;
}