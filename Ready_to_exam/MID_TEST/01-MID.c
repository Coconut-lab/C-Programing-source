#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ������ ���� ����� ����

int main()
{
	char n;
	int res;

	printf("%s\n", __FILE__);
	printf("%s\n", __TIME__);
	printf("%d\n", __LINE__);
	printf("%s\n", __DATE__);

	while (1)
	{
		// ���� �ݺ� ����
		// 1. ���� �Ѱ��� �Է� �޴´�.
		// 2. ���� �Է� ���� ��, ctrl+z == -1 �� ������ ���ѹݺ� Ż��
		// 3. �Է¹��� ���� ���
	
		fprintf(stdout,"\n���� �Ѱ��� �Է��ϼ���: ");
		res = scanf(" %c", &n);		// enterŰ ���� �Է� �޾Ƽ� % �տ� ���� �ʿ� �Ǵ� getchar(); ���

		if (res == -1) {
			break;
		}

		fprintf(stdout, "%c\n", n);
	}

	return 0;
}