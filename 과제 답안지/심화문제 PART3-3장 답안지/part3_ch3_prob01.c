#include <stdio.h>

int main(void)
{
	char name[20];
	int number;

	fprintf(stdout, "����� �����̸��� �Է��ϼ���: ");
	fscanf(stdin, "%s", name);

	fprintf(stdout, "����� �й��� �Է��ϼ���: ");
	fscanf(stdin, "%d", &number);

	fprintf(stdout, "\n�̸�: %s, �й�: %d\n", name, number);

	return 0;
}