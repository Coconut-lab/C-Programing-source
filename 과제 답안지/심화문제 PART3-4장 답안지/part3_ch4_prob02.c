#include <stdio.h>
#include <stdlib.h>

struct student
{
	int eng;
	int math;
};

int main(void)
{
	int num, i;
	int total1 = 0, total2 = 0;
	struct student* p = NULL;

	printf("학생 수를 입력하세요: ");
	scanf("%d", &num);

	p = (struct student*)calloc(num, sizeof(struct student));

	for ( i = 0; i < num; i++)
	{
		printf("영어 성적, 수학 성적(예: 10 10): ");
		scanf("%d %d", &p[i].eng, &p[i].math);
		fflush(stdin);
		total1 = total1 + (p[i].eng);
		total2 = total2 + (p[i].math);
	}

	puts("");
	printf("[%d 명의 학생의 성적 평균]\n", num);
	printf("영어: %.2lf, 수학: %.2lf\n", (double)total1 / num, (double)total2 / num);

	return 0;
}