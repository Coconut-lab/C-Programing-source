#include <stdio.h>

int main(void)
{
	int cnt, i;
	printf("사과박스 개수를 입력하세요 :");
	scanf("%d", &cnt);
	
	for (i=0;i<cnt;i++)
	{
		printf("ㅁ\n");
	}
	printf("사과박스 개수\n");
	return 0;
}