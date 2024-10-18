#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num, score, result = 0;

    printf("학생 수를 입력하세요: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        printf("학생 %d의 성적를 입력하세요: ", i);
        scanf("%d", &score);

        result += score;
    }

    printf("학생들의 점수 평균은 %d입니다.\n", result / num);

    return 0;
}