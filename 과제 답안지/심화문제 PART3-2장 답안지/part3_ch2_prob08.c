#include <stdio.h>
#include <string.h>

int main()
{
	char id[] = "admin";
	char pw[] = "a1234";
	char inputId[100], inputPw[100], temp;
	int i = 0;

	printf("���̵� �Է��ϼ���: ");
	scanf("%s", inputId);

	printf("�н����带 �Է��ϼ���: ");

	while ((temp = getch()) != '\r')
	{
		inputPw[i] = temp;
		i++;
		printf("*");
	}
	inputPw[i] = '\0';
	printf("\n");

	if (strcmp(id, inputId) != 0)
	{
		printf("���̵� ��ġ���� �ʽ��ϴ�.\n");
		return 0;
	}
	if (strcmp(pw, inputPw) != 0)
	{
		printf("�н����尡 ��ġ���� �ʽ��ϴ�.\n");
		return 0;
	}
	printf("�α��� ����!\n");
	return 0;
}