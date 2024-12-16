#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int ary[10] = {1,2,5,6,8,9,11,31,26,29};
    int num;
    int found;

    while (1) {
        printf("검색할 숫자를 입력하세요: ");
        scanf("%d", &num);

        if (num == -1) {
            printf("프로그램을 종료합니다.\n");
            break;
        }

        found = 0;
        for (int i = 0; i < 10; i++) {
            if (ary[i] == num) {
                found = 1;
                break;
            }
        }

        if (found) {
            printf("숫자 %d는 배열에 존재합니다.\n", num);
        } else {
            printf("숫자 %d는 배열에 없습니다.\n", num);
        }
    }

    return 0;
}