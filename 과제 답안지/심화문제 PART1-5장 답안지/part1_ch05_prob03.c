#include <stdio.h>

int main()
{
	int num;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);

	printf("���� %d�� 2��� (%d), 1/2���(%d) �Դϴ�.\n", num, num << 1, num >> 1);

	return 0;
}