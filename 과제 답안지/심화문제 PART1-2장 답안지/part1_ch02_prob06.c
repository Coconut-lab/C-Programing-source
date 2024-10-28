#include <stdio.h>

int main(void)
{
	int num;

	printf("10진수를 입력해주세요: ");
	scanf("%d",&num);

	printf("입력한 10진수는 16진수로 : %x 입니다. \n",num);

	return 0;
}