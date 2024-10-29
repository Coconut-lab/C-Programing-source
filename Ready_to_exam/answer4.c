#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_diamond(int n) {
    int spaces, stars;

    // 상단부 출력
    for(int i = 0; i < n/2 + 1; i++) {
        // 공백 출력
        for(spaces = 0; spaces < n/2 - i; spaces++) {
            printf(" ");
        }
        // 별표 출력
        for(stars = 0; stars < 2*i + 1; stars++) {
            printf("*");
        }
        printf("\n");
    }

    // 하단부 출력
    for(int i = n/2 - 1; i >= 0; i--) {
        // 공백 출력
        for(spaces = 0; spaces < n/2 - i; spaces++) {
            printf(" ");
        }
        // 별표 출력
        for(stars = 0; stars < 2*i + 1; stars++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;

    while(1) {
        printf("홀수 크기 입력: ");
        scanf("%d", &n);

        if(n == 0) {
            printf("프로그램을 종료합니다.\n");
            break;
        }

        if(n % 2 == 0) {
            printf("홀수만 입력하세요.\n");
            continue;
        }

        print_diamond(n);
        printf("------------------------\n");
    }

    return 0;
}