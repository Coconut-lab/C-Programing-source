#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num;
    printf("숫자 입력: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("0보다 큰 수가 num에 저장\n");
    } else if (num == 0) {
        printf("0이 num에 저장\n");
    } else {
        printf("0보다 작은수가 num에 저장\n");
    }

    return 0;
}