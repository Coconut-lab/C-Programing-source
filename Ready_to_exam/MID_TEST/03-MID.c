#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �ʵ�, ���ڵ�, ���� ����

int main() {
	int num1, res;
	double score;
	char grade;

	printf("%s\n", __FILE__);
	printf("%s\n", __TIME__);
	printf("%d\n", __LINE__);
	printf("%s\n", __DATE__);

	while (1) {
		static int count;	// ���� ������ 0���� �ڵ� �ʱ�ȭ
		count++;

		fprintf(stdout, "�й��� �Է��ϼ���: ");
		res = scanf("%d", &num1);

		if (res == EOF) {		// EOF == CTRL+Z == -1
			break;
		}

		fprintf(stdout, "������ �Է��ϼ���: ");
		scanf("%lf", &score);

		fprintf(stdout, "���ĺ��� �Է��ϼ���: ");
		scanf(" %c", &grade);

		fprintf(stdout, "���� %d, �й� %d, ���� %.3lf, ���ĺ� %c\n", count, num1, score, grade);

	}

	return 0;
}