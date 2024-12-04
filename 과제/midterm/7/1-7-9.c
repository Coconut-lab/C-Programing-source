#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main(void) {
    int num;

    printf("사과박스 개수를 입력하세요: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        printf("ㅁ\n");
    }
    printf("사과박스 개수\n");

    return 0;
}
