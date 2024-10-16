// 응용문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num;
    FILE* file = fopen("CHJ_log2.txt", "a+");

    /*
    // 논리 오류 발생 코드
    if (num >= 95) {
        printf("A+ 입니다.\n");
    }
    if (num >= 90) {
        printf("A 입니다.\n");
    }
    if (num >= 85) {
        printf("B+ 입니다.\n");
    }
    if (num >= 80) {
        printf("B 입니다.\n");
    } else {
        printf("F 입니다.\n");
    }
    */

    while (1) {
        printf("성적을 입력하세요: ");
        fprintf(file, "성적을 입력하세요: ");
        scanf("%d", &num);

        if (num >= 95 && num <= 100) {
            printf("A+ 입니다.\n");
            fprintf(file ,"A+\n");
            printf("-----------------\n");
        } else if (num >= 90) {
            printf("A 입니다.\n");
            fprintf(file ,"A\n");
            printf("-----------------\n");
        } else if (num >= 85) {
            printf("B+ 입니다.\n");
            fprintf(file ,"B+\n");
            printf("-----------------\n");
        } else if (num >= 80) {
            printf("B 입니다.\n");
            fprintf(file ,"B\n");
            printf("-----------------\n");
        } else if (num >= 0 && num < 80) {
            printf("F 입니다.\n");
            fprintf(file ,"F\n");
            printf("-----------------\n");
        } else {
            printf("성적 계산을 그만합니다.\n");
            fprintf(file ,"STOP\n");
            break;
        }
    }

    fclose(file);
    system("notepad.exe CHJ_log2.txt");
    return 0;
}