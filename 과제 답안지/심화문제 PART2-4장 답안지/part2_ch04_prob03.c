#include <stdio.h>
#define MAX_SIZE 12

int main(void)
{
	int i;
	char arr[MAX_SIZE];
	char* cp;

	cp = arr;

	printf("���ڿ� �Է�(���� �Ұ�): ");
	scanf("%s", cp);

	printf("���ڿ� ���: ");
	for (i = 0; i < sizeof(arr) / sizeof(char); i++)
	{
		if (cp[i] == '\0')
			break;
		printf("%c", cp[i]);
	}
	printf("\n\n");

	printf("���� ����(a->?): ");
	for (i = 0; i < sizeof(arr) / sizeof(char); i++)
	{
		if (cp[i] == '\0')
			break;
		else
		{
			if (cp[i] == 'a')
				cp[i] = '?';
			printf("%c", cp[i]);
		}
	}
	printf("\n");

	return 0;
}