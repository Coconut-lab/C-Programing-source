#include <stdio.h>

int main(void)
{
	printf("������ �ڷ���\n");
	printf("char �ڷ���ũ��: %d\n", sizeof(char));
	printf("short �ڷ���ũ��: %d\n", sizeof(short));
	printf("int �ڷ���ũ��: %d\n", sizeof(int));
	printf("long �ڷ���ũ��: %d\n", sizeof(long));

	printf("\n");

	printf("�Ǽ��� �ڷ���\n");
	printf("float �ڷ���ũ��: %d\n", sizeof(float));
	printf("double �ڷ���ũ��: %d\n", sizeof(double));
	printf("long double �ڷ���ũ��: %d\n", sizeof(long double));

	return 0;
}