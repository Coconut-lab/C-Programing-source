#include <stdio.h>
#include <stdlib.h>

#define NUMBER1 "1234"
#define NUMBER2 "4321"
int main()
{
	printf("���ڿ� %s�� %s�� ���� ���� %d �Դϴ�.\n",NUMBER1, NUMBER2, atoi(NUMBER1) + atoi(NUMBER2));

	return 0;
}