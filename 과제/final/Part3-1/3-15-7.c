#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100

struct student {
    char name[MAX];
    double id;
    int year;
    struct grade {
        int eng;
        int math;
    } grade;
};

int main(void) {
    struct student stu = {"박정민", 2010123456, 4, {90, 100}};

    printf("이름 : %s\n", stu.name);
    printf("학번 : %.lf\n", stu.id);
    printf("학년 : %d\n", stu.year);
    printf("수학점수: %d\t영어점수: %d\n", stu.grade.math, stu.grade.eng);

    return 0;
}