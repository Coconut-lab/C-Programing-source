#include <stdio.h>

int checkInt(char);

int main()
{
	char ch;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%c", &ch);

	printf("�Է��� ���� %c��(��) ����", ch);
	
	if (checkInt(ch))
	{
		printf("�Դϴ�.\n");
	}
	else
	{
		printf("�� �ƴմϴ�.\n");
	}

	return 0;
}

int checkInt(char ch)
{
	if (ch > 47 && ch < 58)
		return 1;

	return 0;
}