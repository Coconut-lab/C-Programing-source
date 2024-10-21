#include <stdio.h>

int main()
{
	int num=0, total  = 0;

	while (num != -1)
	{
		total += num;
		printf("숫자를 입력하세요(종료: -1) : ");
		scanf("%d", &num);
	}

	printf("입력한 숫자의 총 합은 %d 입니다.\n", total);
	
	return 0;
}