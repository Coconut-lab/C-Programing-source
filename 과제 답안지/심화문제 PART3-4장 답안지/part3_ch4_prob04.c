#include <stdio.h>
#include <malloc.h>

int main()
{
	int **ary;
	int num;
	int i, j, temp = 1;

	printf("�迭�� ũ�⸦ �Է��ϼ��� : ");
	scanf("%d", &num);

	// 2���� �迭 �����Ҵ�
	ary = (int **)calloc(1, sizeof(int*) * num);

	for (i = 0; i < num; i++)
	{
		ary[i] = (int *)calloc(1, sizeof(int) * num);
	}

	printf("\n-�迭�� ���-\n");

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			ary[i][j] = temp;
			printf("%2d  ", temp);
			temp++;
		}
		printf("\n");
	}

	printf("\n�迭�� �밢�� ���:");

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			if (i == j)
			{
				printf("%2d  ", ary[i][j]);
			}
		}
	}

	printf("\n\n");

	// 2���� �迭 �����Ҵ� ����
	for (i = 0; i < num; i++)
	{
		free(ary[i]);
	}
	free(ary);
	return 0;
}
