#include <stdio.h>

int main()
{
	int i, num, power, total;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);
	printf("�ŵ������� ������ �Է��ϼ��� : ");
	scanf("%d", &power);

	total = num;
	for (i = 1; i < power; i++)
	{
		total *= num;
	}
	
	printf("%d�� %d���� %d �Դϴ�.\n", num, power, total);

	return 0;
}