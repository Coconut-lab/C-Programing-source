#include <stdio.h>

int main(void)
{
	int oct, hex;
	int result;

	printf("8������ �Է��ϼ���:");
	scanf("%o", &oct);

	printf("16������ �Է��ϼ���:");
	scanf("%x", &hex);

	result = oct + hex;

	printf("�Է��� 8���� %o�� 16���� %x�� ���� �������� %d�Դϴ�.\n",oct,hex,result);

	return 0;
}