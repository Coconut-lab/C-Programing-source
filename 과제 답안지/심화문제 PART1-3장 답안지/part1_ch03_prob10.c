#include <stdio.h>

int main(void)
{
	int total, speed;
	int time;

	printf("�ٿ�޾ƾ� �� ������ ũ�⸦ �Է��ϼ���:");
	scanf("%d",&total);

	printf("���� �ٿ�ε� �ӵ��� �Է��ϼ���:");
	scanf("%d", &speed);

	time = total / speed;

	printf("�ٿ�ε� ���� �ð��� %d���Դϴ�. \n", time);

	return 0;
}