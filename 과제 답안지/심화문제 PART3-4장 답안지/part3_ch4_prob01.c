#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, i, sum = 0;
	int* p = NULL;

	printf("���ϴ� �Է� ����: ");
	scanf("%d", &num);

	p = (int*)malloc(sizeof(int)*num);

	for (i = 0; i < num; i++)
	{
		printf("%d��° ����: ", i + 1);
		scanf("%d", p + i);
		sum = sum + p[i];
	}

	printf("�Է� ���� ����: %d\n", sum);

	free(p);

	return 0;
}