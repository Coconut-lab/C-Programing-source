#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char input[255];
	int i = 0, lower = 0, upper = 0;

	printf("���ڿ� �Է� : ");
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
	printf("�Է��� ���ڿ� : %s\n", input);
	printf("�ҹ��� ���� : %d\n", lower);
	printf("�빮�� ���� : %d\n\n", upper);

	return 0;
}