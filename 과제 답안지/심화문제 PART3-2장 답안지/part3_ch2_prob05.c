#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input, i, result, num;

	printf("srand �� ���� �� �Է�: ");
	scanf("%d", &input);

	srand(input);

	result = rand() % 100;

	printf("������ ���ڴ�?: ");
	scanf("%d", &num);

	if (result == num)
		puts("����!");
	else
		printf("����! ����: %d\n", result);


	return 0;
}

