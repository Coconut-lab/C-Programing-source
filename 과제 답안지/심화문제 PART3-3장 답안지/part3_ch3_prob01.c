#include <stdio.h>

int main(void)
{
	char name[20];
	int number;

	fprintf(stdout, "당신의 영문이름을 입력하세요: ");
	fscanf(stdin, "%s", name);

	fprintf(stdout, "당신의 학번을 입력하세요: ");
	fscanf(stdin, "%d", &number);

	fprintf(stdout, "\n이름: %s, 학번: %d\n", name, number);

	return 0;
}