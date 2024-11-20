#include <stdio.h>
#include <string.h>

typedef struct me
{
	char name[50];
	char num[50];
	int grade;
}INFO;

int main()
{
	INFO m1;
	strcpy(m1.name, "박정민");
	strcpy(m1.num, "2010123456");
	m1.grade = 4;

	printf("이름 : %s\n학번: %s\n학년: %d\n", m1.name, m1.num, m1.grade);

	return 0;
}