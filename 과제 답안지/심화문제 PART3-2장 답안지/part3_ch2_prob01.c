#include <stdio.h>
#include <string.h>

int main(void)
{
	char array1[30];
	int i;

	printf("�̸� �Է�: ");
	gets(array1);

	printf("�� ���ھ� ���: \n");
	for (i = 0; i < strlen(array1) + 1; i++)
		printf(" %c\n", array1[i]);

	return 0;
}