#include <stdio.h>

int main()
{
	int a, b, c, i, temp, position;

	printf("���� 3���� �Է��ϼ��� : ");
	scanf("%d %d %d", &a, &b, &c);

	temp = a*b*c;
	i = 0;

	while (temp != 0)
	{
		temp /= 10;
		i++;
	}

	printf("A * B * C = %d\n", a*b*c);
	printf("�ڸ����� %d �Դϴ�.\n", i);

	return 0;
}