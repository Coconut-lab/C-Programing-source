#include <stdio.h>

int main(void)
{
	int std, i, score,total=0;
	printf("�л� ���� �Է��ϼ��� :");
	scanf("%d",&std);

	for (i =1 ; i<=std; i++)
	{
		printf("�л� %d�� ������ �Է��ϼ��� :",i);
		scanf("%d", &score);
		total = total + score;
	}

	printf("�л����� ���� ����� %d�Դϴ�.\n",total/std);

	return 0;
}