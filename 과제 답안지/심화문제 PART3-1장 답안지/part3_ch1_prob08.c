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

	strcpy(stu[0].stu.name, "������");
	strcpy(stu[0].stu.num, "2010123456");
	stu[0].stu.grade = 4;

	stu[0].gra.eng = 90;
	stu[0].gra.math = 100;

	strcpy(stu[1].stu.name, "������");
	strcpy(stu[1].stu.num, "2011789456");
	stu[1].stu.grade = 3;

	stu[1].gra.eng = 95;
	stu[1].gra.math = 100;

	strcpy(stu[2].stu.name, "������");
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

	printf("��ü ���� ���� ���: %.2lf\n", mathEve / 3.0);
	printf("��ü ���� ���� ���: %.2lf\n", engEve / 3.0);
	printf("������ ���� ���� ����� %s�Դϴ�.(����:%d)\n", first, total);

	return 0;
}