#include<stdio.h>
#include <string.h>

#pragma region 함수 선언부

struct department
{
	char name[50];
	int count;
	struct department* nextdef;
};
void myPrint(struct department*);

#pragma endregion

int main()
{
	struct department dep1, dep2, dep3;

#pragma region 구조체 초기화
	strcpy(dep1.name, "컴퓨터공학부");
	dep1.count = 550;
	dep1.nextdef = &dep2;

	strcpy(dep2.name, "게임공학부");
	dep2.count = 300;
	dep2.nextdef = &dep3;

	strcpy(dep3.name, "전자공학부");
	dep3.count = 350;
	dep3.nextdef = NULL;
#pragma endregion

	printf("-전체 부서 정보-\n");

	myPrint(&dep1);

	return 0;
}

#pragma region 함수 정의부
void myPrint(struct department *dep)
{
	struct department *i;

	for (i = dep; i != NULL; i = i->nextdef)
	{
		printf("부서 이름: %s\n", i->name);
		printf("부서 인원: %d\n\n", i->count);
	}
}
#pragma endregion
