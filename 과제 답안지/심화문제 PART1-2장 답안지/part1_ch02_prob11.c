#include <stdio.h>

int main()
{
	int num;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);

	printf("\n�Է��� ����(10����) : %d	\n",num);
	printf("�Է��� ����(8����) : %o	\n", num);
	printf("�Է��� ����(16����) : %x	\n", num);

	return 0;
}

/* �ؼ�
�Է¹��� ���ڸ� �پ��� �������� ����ϴ� �����Դϴ�.
printf() �Լ��� %d, %o, %x, %X ���� ���Ĺ��ڸ� �� �˾Ƶμ���.
*/