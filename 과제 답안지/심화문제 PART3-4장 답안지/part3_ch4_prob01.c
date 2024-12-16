#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, i, sum = 0;
	int* p = NULL;

	printf("원하는 입력 개수: ");
	scanf("%d", &num);

	p = (int*)malloc(sizeof(int)*num);

	for (i = 0; i < num; i++)
	{
		printf("%d번째 숫자: ", i + 1);
		scanf("%d", p + i);
		sum = sum + p[i];
	}

	printf("입력 값의 총합: %d\n", sum);

	free(p);

	return 0;
}