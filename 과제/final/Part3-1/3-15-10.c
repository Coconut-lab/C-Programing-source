#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct department {
    char name[100];
    int people;
    struct department *link;
};

void myPrint(struct department *p);

int main(void) {
    struct department dep1 = {"컴퓨터공학부", 550, NULL};
    struct department dep2 = {"전자공학부", 350, NULL};
    struct department dep3 = {"게임공학부", 300, NULL};

    struct department *p = NULL;

    dep1.link = &dep2;
    dep2.link = &dep3;

    printf("-- 전체 부터 정보 --\n");
    myPrint(&dep1);

    return 0;
}

void myPrint(struct department *p) {
    while (p != NULL) {
        printf("학과명: %s\n", p->name);
        printf("학생수: %d\n", p->people);
        printf("\n");
        p = p->link;
    }
}