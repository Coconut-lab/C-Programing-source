#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
    char no[10];
    char name[20];
    double total;
};

int main(void) {
    struct student stu = {"20101323", "Part", 160};
    struct student* p = NULL;
    struct student** pp = NULL;

    p = &stu;
    pp = &p;

    printf("%s %s %lf\n", stu.no, stu.name, stu.total);     // 배열의 이름은 배열의 시작주소
    printf("%s %s %lf\n", (*p).no, (*p).name, (*p).total);
    printf("%s %s %lf\n", p -> no, p -> name, p -> total);

    printf("%s %s %lf\n", (**pp).no, (**pp).name, (**pp).total);
    printf("%s %s %lf\n", (*pp) -> no, (*pp) -> name, (*pp) -> total);

    return 0;
}