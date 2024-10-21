#include <stdio.h>

int main(void)
{
	int num, sum=0,i;
	printf("자연수를 입력하세요:");
	scanf("%d",&num);

	for (i=1;i<=num;i++)
	{
		sum = sum + i;
	}

	printf("1부터 %d 까지의 합은 %d입니다.\n",num,sum);

	return 0;
}