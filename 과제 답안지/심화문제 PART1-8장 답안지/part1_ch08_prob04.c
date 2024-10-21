#include <stdio.h>

int main()
{
	int stu1, stu2, stu3, stu4, stu5;
	double max = 0;

	printf("점수를 입력하세요(양의 정수) : ");
	scanf("%d", &stu1);
	max = stu1;

	printf("점수를 입력하세요(양의 정수) : ");
	scanf("%d", &stu2);

	if (max < stu2)
		max = stu2;

	printf("점수를 입력하세요(양의 정수) : ");
	scanf("%d", &stu3);

	if (max < stu3)
		max = stu3;

	printf("점수를 입력하세요(양의 정수) : ");
	scanf("%d", &stu4);

	if (max < stu4)
		max = stu4;

	printf("점수를 입력하세요(양의 정수) : ");
	scanf("%d", &stu5);

	if (max < stu5)
		max = stu5;

	stu1 = (100 / max) * stu1;
	stu2 = (100 / max) * stu2;
	stu3 = (100 / max) * stu3;
	stu4 = (100 / max) * stu4;
	stu5 = (100 / max) * stu5;

	printf("환산 점수는 %d, %d, %d, %d, %d 입니다.\n", stu1, stu2, stu3, stu4, stu5);

	return 0;
}