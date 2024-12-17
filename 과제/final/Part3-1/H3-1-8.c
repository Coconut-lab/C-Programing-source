#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100

struct student {
    char name[MAX];
    double id;
    int year;
    struct grade {
        double math;
        double eng;
    } grade;
};

int main(void) {
    double math_avg = 0, eng_avg = 0;
    int stu_total[3];

    struct student stu[3] = {
     {"박정민", 2010123456, 4, {100, 90}},
    {"이정민", 2011123456, 3, {100, 95}},
    {"노정민", 2012123456, 2, {80, 100}},
    };

    math_avg = (stu[0].grade.math + stu[1].grade.math + stu[2].grade.math) / 3;
    eng_avg = (stu[0].grade.eng + stu[1].grade.eng + stu[2].grade.eng) / 3;

    printf("전체 수학 점수 평균: %.2lf\n", math_avg);
    printf("전체 영어 점수 평균: %.2lf\n", eng_avg);

    for (int i = 0; i < 3; i++) {
        stu_total[i] = stu[i].grade.math + stu[i].grade.eng;
    }

    if (stu_total[0] > stu_total[1] && stu_total[0] > stu_total[2]) {
        printf("총점이 가장 높은 사람은 %s입니다. (총점: %d)\n", stu[0].name, stu_total[0]);
    } else if (stu_total[1] > stu_total[0] && stu_total[1] > stu_total[2]) {
        printf("총점이 가장 높은 사람은 %s입니다. (총점: %d)\n", stu[1].name, stu_total[1]);
    } else {
        printf("총점이 가장 높은 사람은 %s입니다. (총점: %d)\n", stu[2].name, stu_total[2]);
    }

    return 0;
}