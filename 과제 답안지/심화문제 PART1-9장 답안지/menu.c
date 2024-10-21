#include <stdio.h>
#include "name2.h"

int main(void)
{
	int menu;
	int inInt, resultInt;
	char inChar, resultChar;

	while (1)
	{
		printf("메뉴를 입력하세요(1: 절대값 변환, 2: 대소문자 변환): ");
		scanf("%d", &menu);

		switch (menu)
		{
			case 1 :
				printf("정수를 입력하세요:");
				scanf("%d", &inInt);
				resultInt = absolute(inInt);
				printf("입력 : %d, 결과 : %d\n", inInt, resultInt);
				break;

			case 2 :
				printf("영문자를 입력하세요 : ");
				scanf(" %c",&inChar);
				resultChar = reverse(inChar);
				if (resultChar)
				{
					printf("입력 : %c, 결과 : %c\n",inChar,resultChar);
				}
				else
				{
					printf("영문자를 입력해주세요\n");
				}
				break;

			default :
				printf("종료\n ");
				return 0;
		}

		printf("-----------------------------------------------------\n");
	}

	return 0;
}

