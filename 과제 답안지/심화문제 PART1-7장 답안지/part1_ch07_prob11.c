#pragma warning(disable:4996)

#include <stdio.h>
#include <Windows.h>
#include <time.h>

int main()
{
	clock_t start, end, i;

	start = clock();

	for (i = 1; i < 5001; i++)
	{
		printf("%d ��° ���.\n", i);
	}
	end = clock();

	printf("\n���� �ð� : %lf ��\n", (double)(end - start) / CLOCKS_PER_SEC);

	return 0;
}

/*
�����ϰ��� �ϴ� ���μ��� (for()�� 5000��) �� �ٷ� ���� �Ŀ� �ð��� �����ϰ�
�� �ð� ������ ���̸� ����մϴ�.

���Ǹ� ���� for���� �������� i=1; i<5001; i++ �� ����մϴ�.
*/