#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int i;

	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", str);

	printf("������ ���ڿ�: ");
	for (i = strlen(str); i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");
	
}