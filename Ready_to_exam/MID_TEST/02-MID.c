#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �ʵ�, ���ڵ�, ���� ����

int main()
{
	int num1, res;
	double score;
	// char grade;

	printf("%s\n", __FILE__);
	printf("%s\n", __TIME__);
	printf("%d\n", __LINE__);
	printf("%s\n", __DATE__);

	while (1) {
		// �й��Է¹ޱ�
		// �����Է¹ޱ�
		// �й�, ���� ���, ���ѹݺ� count�ϱ� �� 3�� ������ ���
		static int count = 1;	// �� �ѹ� �ʱ�ȭ �ؾ� �ؼ� static �ʼ�

		fprintf(stdout, "�й��� �Է��ϼ���: ");
		res = scanf("%d", &num1);

		if (res == -1) {
			break;
		}

		fprintf(stdout, "������ �Է��ϼ���: ");
		scanf("%lf", &score);

		fprintf(stdout, "���� %d, �й� %d, ���� %.3lf\n", count, num1, score);
		count++;
	}

	return 0;
}