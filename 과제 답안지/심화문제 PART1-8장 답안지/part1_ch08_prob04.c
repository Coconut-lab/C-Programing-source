#include <stdio.h>

int main()
{
	int stu1, stu2, stu3, stu4, stu5;
	double max = 0;

	printf("������ �Է��ϼ���(���� ����) : ");
	scanf("%d", &stu1);
	max = stu1;

	printf("������ �Է��ϼ���(���� ����) : ");
	scanf("%d", &stu2);

	if (max < stu2)
		max = stu2;

	printf("������ �Է��ϼ���(���� ����) : ");
	scanf("%d", &stu3);

	if (max < stu3)
		max = stu3;

	printf("������ �Է��ϼ���(���� ����) : ");
	scanf("%d", &stu4);

	if (max < stu4)
		max = stu4;

	printf("������ �Է��ϼ���(���� ����) : ");
	scanf("%d", &stu5);

	if (max < stu5)
		max = stu5;

	stu1 = (100 / max) * stu1;
	stu2 = (100 / max) * stu2;
	stu3 = (100 / max) * stu3;
	stu4 = (100 / max) * stu4;
	stu5 = (100 / max) * stu5;

	printf("ȯ�� ������ %d, %d, %d, %d, %d �Դϴ�.\n", stu1, stu2, stu3, stu4, stu5);

	return 0;
}