#include <stdio.h>

int main(void)
{
	int i;
	char arr[12];
	char* cp = NULL;

	cp = arr;
	
	printf("문자열 입력(공백 불가): ");
	scanf("%s", cp);

	printf("문자열 출력: ");
	for ( i = 0; i < sizeof(arr)/sizeof(char); i++)
	{
		if (cp[i] == '\0')
			break;
		printf("%c", cp[i]);
	}
	printf("\n");

	return 0;
}