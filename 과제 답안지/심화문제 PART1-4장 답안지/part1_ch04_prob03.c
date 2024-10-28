#include <stdio.h>

int main()
{
	const int byte = 1024;
	int kbyte;

	printf("킬로바이트(KB) 를 입력하세요 : ");
	scanf("%d", &kbyte);

	printf("%d 킬로바이트(KB) 는 %d 바이트(B) 입니다.\n", kbyte, kbyte*byte);

	return 0;
}