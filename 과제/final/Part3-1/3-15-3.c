#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
    double id;
    char name[20];
    int year;
};

int main(void) {
    struct student stu[3] = {
        {20160001, "GoGilDong", 1997},
        {20160002, "HongGilDong", 1996},
        {20160003, "KimGilDong", 1995}
    };

    struct student* p = NULL;

    for (int i = 0; i < sizeof(stu) / sizeof(struct student); i++) {
        p = stu + i;
        printf("%d년생 %s의 학번은 %.lf입니다.\n", p->year, p->name, p->id);
    }
    
    return 0;
}