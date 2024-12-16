#include <stdio.h>
#include <string.h>

int main(void)
{
	char array1[30];
	int i;

	printf("이름 입력: ");
	gets(array1);

	printf("한 글자씩 출력: \n");
	for (i = 0; i < strlen(array1) + 1; i++)
		printf(" %c\n", array1[i]);

	return 0;
}