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

	strcpy(s1.stu.name, "������");
	strcpy(s1.stu.num, "2010123456");
	s1.stu.grade = 4;

	s1.gra.eng = 90;
	s1.gra.math = 100;

	printf("�̸� : %s\n�й�: %s\n�г�: %d\n", s1.stu.name, s1.stu.num, s1.stu.grade);
	printf("��������: %d\t��������: %d\n", s1.gra.math, s1.gra.eng);

	return 0;
}