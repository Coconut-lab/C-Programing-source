#include <stdio.h>

int main()
{
	int num=0, total  = 0;

	while (num != -1)
	{
		total += num;
		printf("���ڸ� �Է��ϼ���(����: -1) : ");
		scanf("%d", &num);
	}

	printf("�Է��� ������ �� ���� %d �Դϴ�.\n", total);
	
	return 0;
}