#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 5

int main(void) {
    int student[MAX];

    student[0] = 90;
    student[1] = 80;
    student[2] = 70;

    printf("첫 번째 학생의 점수: %d\n", student[0]);
    printf("두 번째 학생의 점수: %d\n", student[1]);
    printf("세 번째 학생의 점수: %d\n", student[2]);
    printf("네 번째 학생의 점수: %d\n", student[3]);
    printf("다섯 번째 학생의 점수: %d\n", student[4]);

    return 0;
}