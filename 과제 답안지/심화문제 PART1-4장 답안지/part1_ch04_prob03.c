#include <stdio.h>

int main()
{
	const int byte = 1024;
	int kbyte;

	printf("ų�ι���Ʈ(KB) �� �Է��ϼ��� : ");
	scanf("%d", &kbyte);

	printf("%d ų�ι���Ʈ(KB) �� %d ����Ʈ(B) �Դϴ�.\n", kbyte, kbyte*byte);

	return 0;
}