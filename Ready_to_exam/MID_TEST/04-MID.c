#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Ż������, ������� ����

int main() {
	int num1;
	double score;
	char grade;

	printf("%s\n", __FILE__);
	printf("%s\n", __TIME__);
	printf("%d\n", __LINE__);
	printf("%s\n", __DATE__);

	while (1) {
		static int count = 1;

		if (count >= 100) {
			break;
		}

		fprintf(stdout, "�����͸� �Է� (�й� ���� ���ĺ�): ");
		scanf("%d %lf %c", &num1, &score, &grade);


		fprintf(stdout, "���� %d, �й� %d, ���� %.3lf, ���ĺ� %c\n", count, num1, score, grade);
		fprintf(stdout, "--------------------------------------\n");
		count++;
	}

	return 0;
}