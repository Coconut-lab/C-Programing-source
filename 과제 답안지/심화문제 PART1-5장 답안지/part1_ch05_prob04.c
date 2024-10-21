#include <stdio.h>

int main()
{
	int num;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);

	printf("%d\n", num & 0x01);

	return 0;
}