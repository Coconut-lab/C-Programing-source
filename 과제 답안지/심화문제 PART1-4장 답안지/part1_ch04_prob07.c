#include <stdio.h>

int main(void)
{
	int oct, hex;
	int result;

	printf("8진수를 입력하세요:");
	scanf("%o", &oct);

	printf("16진수를 입력하세요:");
	scanf("%x", &hex);

	result = oct + hex;

	printf("입력한 8진수 %o와 16진수 %x를 더한 십진수는 %d입니다.\n",oct,hex,result);

	return 0;
}