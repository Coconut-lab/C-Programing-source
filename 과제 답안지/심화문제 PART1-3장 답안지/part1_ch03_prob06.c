#include <stdio.h>

int main(void)
{
	double wide, height;
	double result;

	printf("�簢���� ���� ���̸� �Է��ϼ���:");
	scanf("%lf",&wide);
	printf("�簢���� ���� ���̸� �Է��ϼ���:");
	scanf("%lf",&height);
	
	result = 2 * (wide + height);

	printf("���� %lf, ���� %lf�� �簢���� �ѷ��� \n%lf �Դϴ�. \n",wide,height,result);

	return 0;
}