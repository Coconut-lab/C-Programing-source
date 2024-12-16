#include <stdio.h>
#include <malloc.h>

int main()
{
	int num, i, sum = 0;;
	int *ary;

	printf("정수를 입력하세요 : ");
	scanf("%d", &num);

	ary = (int *)calloc(1, sizeof(int) * num);

	for (i = 0; i < num; i++)
	{
		printf("숫자 입력 : ");
		scanf("%d", ary + i);
	}

	printf("입력한 숫자: ");
	for (i = 0; i < num; i++)
	{
		printf("%3d", ary[i]);
		sum += ary[i];
	}
	printf("\n총합 : %4d, 평균 : %.1lf\n", sum, sum / (double)num);

	free(ary);
	return 0;
}