#include <stdio.h>

int main(void)
{
	int i;
	char arr[12];
	char* cp = NULL;

	cp = arr;
	
	printf("���ڿ� �Է�(���� �Ұ�): ");
	scanf("%s", cp);

	printf("���ڿ� ���: ");
	for ( i = 0; i < sizeof(arr)/sizeof(char); i++)
	{
		if (cp[i] == '\0')
			break;
		printf("%c", cp[i]);
	}
	printf("\n");

	return 0;
}