#include <stdio.h>

int max(int, int);

int main()
{
	int a, b;
	printf("�� ���ڸ� �Է��ϼ��� :");
	scanf("%d %d", &a, &b);

	printf("%d, %d �� ū ���ڴ� %d �Դϴ�.\n",a, b, max(a, b));

	return 0;
}

int max(int a, int b)
{
	if (a < b)
		return b;
	else
		return a;
}