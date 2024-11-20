#include<stdio.h>
int main()
{
	int arr[3][3] = { 0 };
	int(*p)[3] = NULL; //배열 포인터 변수 사용
	int i, j;

	printf("정수 입력 : ");
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	p = arr;
	printf("\n출력\n");
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
