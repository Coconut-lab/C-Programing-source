#include <stdio.h>

int main()
{
	typedef unsigned int high;

	high h;

	printf("����(Ű)�� �Է��ϼ���(cm) : ");
	scanf("%d", &h);

	printf("����� ������ %.2lfm �Դϴ�.\n", h/100.0);
	return 0;
}