#include <stdio.h>

#define CLIME 30
#define SLIDE 10

int main()
{
	int high, i=0;

	printf("�칰�� ���̸� �Է��ϼ���(cm) : ");
	scanf("%d", &high);

	high -= SLIDE; // ù�� �̲����� ����

	do
	{
		i++;
		high += SLIDE; // �̲�����		
		high -= CLIME; // �ö�
	} while (high > 0);

	printf("�칰�� Ż���ϴµ����� �ɸ� �ð��� %d�� �Դϴ�.\n", i);
	return 0;
}