#include <stdio.h>

int main(void)
{
	int num, sum=0,i;
	printf("�ڿ����� �Է��ϼ���:");
	scanf("%d",&num);

	for (i=1;i<=num;i++)
	{
		sum = sum + i;
	}

	printf("1���� %d ������ ���� %d�Դϴ�.\n",num,sum);

	return 0;
}