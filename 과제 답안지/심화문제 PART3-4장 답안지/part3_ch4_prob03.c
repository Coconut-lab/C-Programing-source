#include <stdio.h>
#include <malloc.h>

int main()
{
	int num, i, sum = 0;;
	int *ary;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);

	ary = (int *)calloc(1, sizeof(int) * num);

	for (i = 0; i < num; i++)
	{
		printf("���� �Է� : ");
		scanf("%d", ary + i);
	}

	printf("�Է��� ����: ");
	for (i = 0; i < num; i++)
	{
		printf("%3d", ary[i]);
		sum += ary[i];
	}
	printf("\n���� : %4d, ��� : %.1lf\n", sum, sum / (double)num);

	free(ary);
	return 0;
}