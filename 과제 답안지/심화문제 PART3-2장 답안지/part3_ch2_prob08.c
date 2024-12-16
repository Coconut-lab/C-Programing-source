#include <stdio.h>
#include <string.h>

int main()
{
	char id[] = "admin";
	char pw[] = "a1234";
	char inputId[100], inputPw[100], temp;
	int i = 0;

	printf("아이디를 입력하세요: ");
	scanf("%s", inputId);

	printf("패스워드를 입력하세요: ");

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
		printf("아이디가 일치하지 않습니다.\n");
		return 0;
	}
	if (strcmp(pw, inputPw) != 0)
	{
		printf("패스워드가 일치하지 않습니다.\n");
		return 0;
	}
	printf("로그인 성공!\n");
	return 0;
}