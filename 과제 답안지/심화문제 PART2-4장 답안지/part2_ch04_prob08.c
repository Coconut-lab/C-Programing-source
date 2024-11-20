#include <stdio.h>

void printMenu(char (*)[50], int);

int main()
{
	int num;
	char menu[][50] = { "=========== MENU ===========\n" ,"1. 1번 메뉴입니다.\n",
												"2. 2번 메뉴입니다.\n" ,"0. 프로그램 종료\n\n" };
	int size = sizeof(menu) / sizeof(menu[0]);

	while (1)
	{
		printMenu(menu, size);
		printf("메뉴 번호를 입력하세요 : ");
		scanf("%d", &num);
		switch (num)
		{
		case 0:
			printf("\n프로그램을 종료합니다.\n\n");
			return;
		case 1:
			printf("\n1번 메뉴를 실행합니다.\n\n");
			break;
		case 2:
			printf("\n2번 메뉴를 실행합니다.\n\n");
			break;
		default:
			printf("\n잘못 입력하셨습니다.\n\n");
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
