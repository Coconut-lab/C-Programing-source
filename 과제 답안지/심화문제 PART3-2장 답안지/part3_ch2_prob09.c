#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char input[255];
	int i = 0, lower = 0, upper = 0;

	printf("문자열 입력 : ");
	gets(input);

	while (input[i] != '\0')
	{
		if (islower(input[i]))
		{
			lower++;
		}
		else if (isupper(input[i]))
		{
			upper++;
		}
		i++;
	}
	printf("입력한 문자열 : %s\n", input);
	printf("소문자 개수 : %d\n", lower);
	printf("대문자 개수 : %d\n\n", upper);

	return 0;
}