#include <stdio.h>

void printMenu(char (*)[50], int);

int main()
{
	int num;
	char menu[][50] = { "=========== MENU ===========\n" ,"1. 1�� �޴��Դϴ�.\n",
												"2. 2�� �޴��Դϴ�.\n" ,"0. ���α׷� ����\n\n" };
	int size = sizeof(menu) / sizeof(menu[0]);

	while (1)
	{
		printMenu(menu, size);
		printf("�޴� ��ȣ�� �Է��ϼ��� : ");
		scanf("%d", &num);
		switch (num)
		{
		case 0:
			printf("\n���α׷��� �����մϴ�.\n\n");
			return;
		case 1:
			printf("\n1�� �޴��� �����մϴ�.\n\n");
			break;
		case 2:
			printf("\n2�� �޴��� �����մϴ�.\n\n");
			break;
		default:
			printf("\n�߸� �Է��ϼ̽��ϴ�.\n\n");
			break;
		}
	}
	return 0;
}

void printMenu(char (*menu)[50], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%s", menu+i);
	}
}
