#include<stdio.h>
#include <string.h>

#pragma region �Լ� �����

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

#pragma region ����ü �ʱ�ȭ
	strcpy(dep1.name, "��ǻ�Ͱ��к�");
	dep1.count = 550;
	dep1.nextdef = &dep2;

	strcpy(dep2.name, "���Ӱ��к�");
	dep2.count = 300;
	dep2.nextdef = &dep3;

	strcpy(dep3.name, "���ڰ��к�");
	dep3.count = 350;
	dep3.nextdef = NULL;
#pragma endregion

	printf("-��ü �μ� ����-\n");

	myPrint(&dep1);

	return 0;
}

#pragma region �Լ� ���Ǻ�
void myPrint(struct department *dep)
{
	struct department *i;

	for (i = dep; i != NULL; i = i->nextdef)
	{
		printf("�μ� �̸�: %s\n", i->name);
		printf("�μ� �ο�: %d\n\n", i->count);
	}
}
#pragma endregion
