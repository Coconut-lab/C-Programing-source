#pragma warning(disable:4996)
#include<stdio.h>
#include <string.h>
struct department
{
	char name[50];
	int count;
	struct department* nextdef;
};
int main()
{
	FILE *fp;
	struct department dep1, dep2, dep3;

	fp=fopen("department.txt", "w");

	strcpy(dep1.name, "컴퓨터공학부");
	dep1.count = 550;
	dep1.nextdef = &dep2;

	strcpy(dep2.name, "게임공학부");
	dep2.count = 300;
	dep2.nextdef = &dep3;

	strcpy(dep3.name, "전자공학부");
	dep3.count = 350;
	dep3.nextdef = NULL;

	printf("-전체 부서 정보-\n");

	printf("부서 이름: %s\n", dep1.name);
	printf("부서 인원: %d\n\n", dep1.count);
	fprintf(fp, "%s %d\n", dep1.name, dep1.count);

	printf("부서 이름: %s\n", dep1.nextdef->name);
	printf("부서 인원: %d\n\n", dep1.nextdef->count);
	fprintf(fp, "%s %d\n", dep1.nextdef->name, dep1.nextdef->count);

	printf("부서 이름: %s\n", dep1.nextdef->nextdef->name);
	printf("부서 인원: %d\n\n", dep1.nextdef->nextdef->count);
	fprintf(fp, "%s %d\n", dep1.nextdef->nextdef->name, dep1.nextdef->nextdef->count);

	fclose(fp);
	return 0;
}