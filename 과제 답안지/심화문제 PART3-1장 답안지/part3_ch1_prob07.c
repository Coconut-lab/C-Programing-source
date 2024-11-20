#include <stdio.h>
#include <string.h>

struct me
{
	char name[50];
	char num[50];
	int grade;
};
struct grade
{
	int math;
	int eng;
};
struct student
{
	struct me stu;
	struct grade gra;
};

int main()
{
	struct student s1;

	strcpy(s1.stu.name, "박정민");
	strcpy(s1.stu.num, "2010123456");
	s1.stu.grade = 4;

	s1.gra.eng = 90;
	s1.gra.math = 100;

	printf("이름 : %s\n학번: %s\n학년: %d\n", s1.stu.name, s1.stu.num, s1.stu.grade);
	printf("수학점수: %d\t영어점수: %d\n", s1.gra.math, s1.gra.eng);

	return 0;
}