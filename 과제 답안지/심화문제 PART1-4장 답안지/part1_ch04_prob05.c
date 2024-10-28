#include <stdio.h>

#define SCORE 400
#define INCREASE 15

int main()
{
	int days;

	printf("공부한 날 수를 입력하세요 : ");
	scanf("%d", &days);

	printf("공부 %d 일 째의 예상 토익점수는 %d 점 입니다.\n",days, SCORE+INCREASE*days);

	return 0;
}