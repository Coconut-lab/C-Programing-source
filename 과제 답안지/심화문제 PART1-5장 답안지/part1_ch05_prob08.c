#include <stdio.h>

int main(void)
{
	int a, b;
	char c;

	scanf("%d %c %d", &a, &c, &b);

	c == '+' ? printf("������� %d�Դϴ�.\n", a + b) : printf("������ ������ �����Դϴ�.\n");

	return 0;
}