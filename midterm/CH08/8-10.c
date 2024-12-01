#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num;

    while (1) {
        printf("몇 번 스위치를 누르시겠습니까?: ");
        scanf("%d",&num);

        if (num >= 0) {
            switch (num) {
                case 1:
                    printf("전동으 켜짐\n");
                    break;  // 필수
                case 2:
                    printf("전등이 꺼짐\n");
                    break;  // 필수
                case 3:
                    printf("고장\n");
                    break; // 필수
                case 4:
                    printf("예외사항\n");
                    // break;
                default:
                    printf("1 ~ 3 까지 있습니다\n");
            }
        } else {
            printf("프로그램 종료\n");
            break;
        }
    }

    return 0;
}