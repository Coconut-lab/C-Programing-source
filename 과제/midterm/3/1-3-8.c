#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int score;
    char grade;
    
    printf("이번학기 목표 학점 및 점수를 입력하세요: ");
    scanf("%c %d", &grade, &score);
    
    printf("목표 학점: %c\n", grade);
    printf("목표 점수: %d\n", score);
    
    return 0;
}

