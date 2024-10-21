#include <stdio.h>

int absolute(int num)
{
	if (num >= 0)
	{
		return num;
	}
	else
	{
		return -num;
	}
}

char reverse(char asc)
{
	if (asc >= 'a'&&asc <= 'z')
	{
		asc = asc + ('A' - 'a');
		return asc;
	}

	else if(asc>='A' && asc <='Z')
	{
		asc = asc - ('A' - 'a');
		return asc;
	}

	else
	{
		return 0;
	}
}

int main(void)
{
	int menu;
	int inInt, resultInt;
	char inChar, resultChar;

	while (1)
	{
		printf("�޴��� �Է��ϼ���(1: ���밪 ��ȯ, 2: ��ҹ��� ��ȯ): ");
		scanf("%d", &menu);

		switch (menu)
		{
			case 1 :
				printf("������ �Է��ϼ���:");
				scanf("%d", &inInt);
				resultInt = absolute(inInt);
				printf("�Է� : %d, ��� : %d\n", inInt, resultInt);
				break;

			case 2 :
				printf("�����ڸ� �Է��ϼ��� : ");
				scanf(" %c",&inChar);
				resultChar = reverse(inChar);
				if (resultChar)
				{
					printf("�Է� : %c, ��� : %c\n",inChar,resultChar);
				}
				else
				{
					printf("�����ڸ� �Է����ּ���\n");
				}
				break;

			default :
				printf("����\n ");
				return 0;
		}

		printf("-----------------------------------------------------\n");
	}

	return 0;
}

