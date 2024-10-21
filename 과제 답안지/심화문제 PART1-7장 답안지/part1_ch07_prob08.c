#include <stdio.h>

int main(void)
{
	int std, i, score,total=0;
	printf("학생 수를 입력하세요 :");
	scanf("%d",&std);

	for (i =1 ; i<=std; i++)
	{
		printf("학생 %d의 성적을 입력하세요 :",i);
		scanf("%d", &score);
		total = total + score;
	}

	printf("학생들의 점수 평균은 %d입니다.\n",total/std);

	return 0;
}