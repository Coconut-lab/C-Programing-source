#include <stdio.h>
#include <string.h>

int myStrcmp(char *, char *);

int main()
{
	char str1[100], str2[100];

	printf("���ڿ��� �Է��ϼ���:");
	scanf("%s", str1);
	printf("���� ���ڿ��� �Է��ϼ���:");
	scanf("%s", str2);

	if (myStrcmp(str1, str2) == 0)
	{
		printf("�� ���ڿ��� ���� ���ڿ��Դϴ�\n");
	}
	else
	{
		printf("�� ���ڿ��� �ٸ� ���ڿ��Դϴ�\n");
	}
}

int myStrcmp(char *str1, char *str2)
{
	int i = 0;

	while (1)
	{
		if (str1[i] == '\0')
		{
			if (str2[i] == '\0')
			{
				return 0;
			}
		}
		if (str1[i] != str2[i])
		{
			return -1;
		}
		i++;
	}
}