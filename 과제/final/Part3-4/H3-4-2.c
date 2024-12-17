#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct student {
    double english;
    double math;
};

int main(void) {
    int n;
    double eng_total = 0, math_total = 0;
    struct student *stu = NULL;

    printf("학생 수를 입력하세요: ");
    scanf("%d", &n);

    stu = (struct student *)calloc(n, sizeof(struct student));
    if (stu == NULL) {
        printf("메모리 할당에 실패했습니다.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("영어 성적, 수학 성적(예: 10 10): ");
        scanf("%lf %lf", &stu[i].english, &stu[i].math);

        eng_total += stu[i].english;
        math_total += stu[i].math;
    }

    printf("\n[%d명의 학생의 성적 평균]\n", n);
    printf("영어: %.2lf, 수학: %.2lf\n", eng_total / n, math_total / n);

    free(stu);
    stu = NULL;
    
    return 0;
}