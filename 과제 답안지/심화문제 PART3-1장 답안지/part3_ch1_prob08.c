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
	struct student stu[3];
	int total = 0;
	int mathEve = 0, engEve = 0, i;
	char *first;

	strcpy(stu[0].stu.name, "박정민");
	strcpy(stu[0].stu.num, "2010123456");
	stu[0].stu.grade = 4;

	stu[0].gra.eng = 90;
	stu[0].gra.math = 100;

	strcpy(stu[1].stu.name, "이정민");
	strcpy(stu[1].stu.num, "2011789456");
	stu[1].stu.grade = 3;

	stu[1].gra.eng = 95;
	stu[1].gra.math = 100;

	strcpy(stu[2].stu.name, "노정민");
	strcpy(stu[2].stu.num, "2012811523");
	stu[2].stu.grade = 2;

	stu[2].gra.eng = 100;
	stu[2].gra.math = 80;

	for (i = 0; i < 3; i++)
	{
		mathEve += stu[i].gra.math;
		engEve += stu[i].gra.eng;

		if (total < stu[i].gra.math + stu[i].gra.eng)
		{
			total = stu[i].gra.math + stu[i].gra.eng;
			first = stu[i].stu.name;
		}
	}

	printf("전체 수학 점수 평균: %.2lf\n", mathEve / 3.0);
	printf("전체 영어 점수 평균: %.2lf\n", engEve / 3.0);
	printf("총점이 가장 높은 사람은 %s입니다.(총점:%d)\n", first, total);

	return 0;
}