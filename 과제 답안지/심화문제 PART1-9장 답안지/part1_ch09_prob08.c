#include <stdio.h>

int checkInt(int a, int b);

int main()
{
	int a, b, check;
	printf("�� ���ڸ� �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);

	printf("���� %d �� %d",a ,b);

	switch (checkInt(a, b))
	{
	case 0:
		printf("�� �����ϴ�.\n");
		break;
	case 1:
		printf("���� Ů�ϴ�.\n");
		break;
	case -1:
		printf("���� �۽��ϴ�.\n");
		break;
	}
	
	return 0;
}

int checkInt(int a, int b)
{
	if (a == b)
		return 0;
	else if (a > b)
		return 1;
	else
		return -1;
}