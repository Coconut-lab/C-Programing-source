#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int i;

	printf("문자열을 입력하세요: ");
	scanf("%s", str);

	printf("뒤집은 문자열: ");
	for (i = strlen(str); i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");
	
}