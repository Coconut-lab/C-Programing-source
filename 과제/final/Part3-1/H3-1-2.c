#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100

struct student {
    double no;
    char name[MAX];
    int years;
};

int main(void) {
    struct student stu;

    printf("학번을 입력하세요: ");
    scanf("%lf", &stu.no);

    printf("영문이름을 입력하세요: ");
    scanf("%s", stu.name);

    printf("출생년도 입력하세요: ");
    scanf("%d", &stu.years);

    printf("%d년생 %s의 학번은 %.lf입니다.\n", stu.years, stu.name, stu.no);

    return 0;
}