#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct department {
    char name[100];
    int people;
    struct department *link;
};

int main(void) {
    struct department dep1 = {"컴퓨터공학부", 550, NULL};
    struct department dep2 = {"전자공학부", 350, NULL};
    struct department dep3 = {"게임공학부", 300, NULL};

    FILE* stream;
    stream = fopen("department.txt", "w");

    struct department *p = NULL;

    p = &dep1;
    dep1.link = &dep2;
    dep2.link = &dep3;

    printf("-- 전체 부터 정보 --\n");
    printf("부서 이름: %s\n", p->name);
    printf("부서 인원: %d\n", p->people);
    printf("\n부서이름: %s\n", p->link->name);
    printf("부서 인원: %d\n", p->link->people);
    printf("\n부서이름: %s\n", p->link->link->name);
    printf("부서 인원: %d\n", p->link->link->people);

    fprintf(stream,"%s %d\n", p->name, p->people);
    fprintf(stream,"%s %d\n", p->link->name, p->link->people);
    fprintf(stream,"%s %d\n", p->link->link->name, p->link->link->people);

    fclose(stream);
    system("open department.txt");

    return 0;
}