#include <stdio.h>

int main()
{
	int first=0, second=0, temp, i;

	for (i = 0; i < 5; i++)
	{
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &temp);

		if (first < temp)
		{
			second = first;
			first = temp;
		}
		else if (second < temp)
		{
			second = temp;
		}	
	}
	printf("�� ��°�� ���� �� : %d\n", second);
	return 0;
}