#include<stdio.h>
int main()
{
	int arr[3][3] = { 0 };
	int(*p)[3] = NULL; //�迭 ������ ���� ���
	int i, j;

	printf("���� �Է� : ");
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	p = arr;
	printf("\n���\n");
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
		{
			printf("%3d", p[i][j]);
		}
		printf("\n");
	}

	return 0;
}
