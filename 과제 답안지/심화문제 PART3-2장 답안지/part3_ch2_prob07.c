#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char menuNum[255];
	int num;

	while (1)
	{
		printf("=========== MENU ===========\n");
		printf("1. 두 수의 덧셈.\n");
		printf("2. 두 수의 곱셈.\n");
		printf("메뉴 번호를 입력하세요 : ");

		gets(menuNum);		// 사용자에게 메뉴 번호 또는 'exit' 를 입력 받는다.

		if (strcmp(menuNum, "exit") == 0)	// 먼저 사용자 입력이 exit인지 검사
		{
			printf("프로그램을 종료합니다...\n");		// exit 입력시 프로그램 종료.
			break;
		}
		
		num = atoi(menuNum); // 문자열을 숫자로 변환함.
		                                                  // 이 함수는 문자열을 숫자로 변환하지 못할 경우 0을 리턴함 -> 메뉴번호로 0번을 사용하지 말 것
		                                                  // 만약 사용자가 a를 입력한 경우 0번을 선택한 것으로 인식하기 때문
		
		switch (num)
		{
		case 1:
			printf("두 수의 덧셈을 수행하는 메뉴입니다.\n\n");
			break;
		case 2:
			printf("두 수의 곱셈을 수행하는 메뉴입니다.\n\n");
			break;
		default:
			printf("잘못 입력하셨습니다.\n\n");
			break;
		}
	}
	return 0;
}