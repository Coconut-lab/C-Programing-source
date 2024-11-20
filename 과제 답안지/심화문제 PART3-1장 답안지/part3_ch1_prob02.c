#include <stdio.h>
#include <string.h>

struct student
{
	double id;
	char name[20];
	int year;
};

int main(void)
{
	struct student stu;

	printf("학번을 입력하세요: ");
	scanf("%lf", &stu.id);

	printf("영문이름을 입력하세요: ");
	scanf("%s", stu.name);


	printf("출생년도 입력하세요: ");
	scanf("%d", &stu.year);

	printf("%d년생 %s의 학번은 %.lf입니다.\n", stu.year, stu.name, stu.id);

 	return 0;
}