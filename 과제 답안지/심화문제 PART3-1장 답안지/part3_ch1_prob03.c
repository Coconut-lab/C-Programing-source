#include <stdio.h>
#include <string.h>

struct student
{
	int id;
	char name[20];
	int year;
};

int main(void)
{
	struct student stu[3] = { { 20160001, "GoGilDong", 1997 }, { 201610002, "HongGilDong", 1996 }, { 20160003, "KimGilDong", 1995 } };
	struct student* p = NULL;
	int i;

	for (i = 0; i < sizeof(stu) / sizeof(struct student); i++)
	{
		p = stu + i;
		printf("%d년생 %s의 학번은 %d입니다.\n", p->year, p->name, p->id);
	}
	
	return 0;
}