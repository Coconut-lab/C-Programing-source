#include <stdio.h>

#define CLIME 30
#define SLIDE 10

int main()
{
	int high, i=0;

	printf("우물의 높이를 입력하세요(cm) : ");
	scanf("%d", &high);

	high -= SLIDE; // 첫날 미끄러짐 보정

	do
	{
		i++;
		high += SLIDE; // 미끄러짐		
		high -= CLIME; // 올라감
	} while (high > 0);

	printf("우물을 탈출하는데까지 걸린 시간은 %d일 입니다.\n", i);
	return 0;
}