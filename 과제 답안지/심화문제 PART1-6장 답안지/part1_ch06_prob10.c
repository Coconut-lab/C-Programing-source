#include <stdio.h>

typedef unsigned int pm;

int main(void)
{
	pm pmtom;
	double mm;
	printf("�������ͷ� ��ȯ�� ������(��)�� �Է��ϼ���:");
	scanf("%d",&pmtom);
	mm = (pmtom)*3.3;

	printf("%d���� %.2lf���������Դϴ�.\n",pmtom,mm);

	return 0;
}