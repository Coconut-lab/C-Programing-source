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

	printf("�й��� �Է��ϼ���: ");
	scanf("%lf", &stu.id);

	printf("�����̸��� �Է��ϼ���: ");
	scanf("%s", stu.name);


	printf("����⵵ �Է��ϼ���: ");
	scanf("%d", &stu.year);

	printf("%d��� %s�� �й��� %.lf�Դϴ�.\n", stu.year, stu.name, stu.id);

 	return 0;
}