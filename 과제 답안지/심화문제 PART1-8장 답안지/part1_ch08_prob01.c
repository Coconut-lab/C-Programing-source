#include <stdio.h>

int main()
{
	int num, i=1;

	printf("���� �Է� : ");
	scanf("%d", &num);

	while (i < num)
		printf("%d\n", i++);

	return 0;
}