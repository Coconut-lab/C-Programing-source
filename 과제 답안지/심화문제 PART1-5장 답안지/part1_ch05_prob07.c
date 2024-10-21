#include <stdio.h>

int main(void)
{
	int score;
	printf("목표 성적을 입력하세요.\n");
	scanf("%d",&score);

	score >= 60 ? printf("PASS\n") : printf("FAIL\n");

	return 0;
}