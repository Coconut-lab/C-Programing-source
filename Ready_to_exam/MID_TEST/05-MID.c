#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Ż������, ������� ����

int main() {
	int num1, num2;
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

		fprintf(stdout, "���� 2�� �Է�: ");
		scanf("--%d--%d", &num1,&num2);
		getchar();		// �ʼ�

		fprintf(stdout, "���� %d, ù ��° �� %d, �� ��° �� %d, ��� %d\n", count, num1, num2, num1 + num2);
		fprintf(stdout, "---------------------------------------------\n");
		count++;
	}

	return 0;
}