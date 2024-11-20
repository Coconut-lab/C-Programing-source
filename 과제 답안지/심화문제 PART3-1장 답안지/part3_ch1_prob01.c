#include <stdio.h>

struct TestScore
{
	int id;
	int first;
	int second;
};

struct class
{
	char name;
	struct TestScore score;
};

int main(void)
{
	struct class d[3] = { { 'A', { 01, 96, 78 } }, { 'A', { 02, 86, 86 } }, { 'A', { 03, 74,  92} } };
	struct class n[3] = { { 'B', { 01, 96, 84 } }, { 'B', { 02, 80, 88 } }, { 'B', { 03, 66, 100 } } };

	double avg_f[2], avg_s[2];
	int i, j;

	avg_f[0] = (double)(d[0].score.first + d[1].score.first + d[2].score.first) / 3;
	avg_f[1] = (double)(n[0].score.first + n[1].score.first + n[2].score.first) / 3;
	avg_s[0] = (double)(d[0].score.second + d[1].score.second + d[2].score.second) / 3;
	avg_s[1] = (double)(n[0].score.second + n[1].score.second + n[2].score.second) / 3;

	printf("[두 반의 성적 평균 비교]\n");
	printf("1차: %c반 %.2lf점, %c반 %.2lf점\n", d[0].name, avg_f[0], n[0].name, avg_f[1]);
	printf("2차: %c반 %.2lf점, %c반 %.2lf점\n", d[0].name, avg_s[0], n[0].name, avg_s[1]);

	return 0;
}