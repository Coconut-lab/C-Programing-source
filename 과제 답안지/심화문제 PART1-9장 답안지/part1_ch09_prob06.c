#include <stdio.h>

int spilt(int, int);

int main(void)
{
	int init, month=12;
	printf("�ʱ� �̻����� ��ü ���� �Է��ϼ��� : ");
	scanf("%d",&init);

	

	printf("���� : %d ����, ���� : %d ����\n", init,spilt(init, month));

	return 0;
}

int spilt(int init, int month)
{
	if (month < 1)
		return init/2;
	else
	{
		month--;
		spilt(init * 2, month);
	}
}