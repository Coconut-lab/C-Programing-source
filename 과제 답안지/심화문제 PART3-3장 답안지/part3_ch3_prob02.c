#include <stdio.h>
#include <stdlib.h>

struct test
{
	int id;
	int score1;
	int score2;
};

int main(void)
{
	struct test data[5];
	FILE* stream1;
	FILE* stream2;
	int size, i;
	int total[5];

	size = sizeof(data) / sizeof(struct test);

	stream1 = fopen("studentscore.txt", "a+");
	for (i = 0; i < size; i++)
		fscanf(stream1, "%d %d %d", &data[i].id, &data[i].score1, &data[i].score2);
	fclose(stream1);

	for (i = 0; i < size; i++)
		total[i] = data[i].score1 + data[i].score2;

	stream2 = fopen("report.txt", "a+");
	for (i = 0; i < size; i++)
		fprintf(stream2, "�л���ȣ: %02d, ����1: %d, ����2: %d, ����: %d\n", data[i].id, data[i].score1, data[i].score2, total[i]);
	fclose(stream2);

	system("notepad.exe report.txt");

	return 0;
}