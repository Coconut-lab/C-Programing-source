#include <stdio.h>

#define SCORE 400
#define INCREASE 15

int main()
{
	int days;

	printf("������ �� ���� �Է��ϼ��� : ");
	scanf("%d", &days);

	printf("���� %d �� °�� ���� ���������� %d �� �Դϴ�.\n",days, SCORE+INCREASE*days);

	return 0;
}