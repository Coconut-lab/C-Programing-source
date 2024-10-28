#include <stdio.h>

int main(void)
{
	int total, speed;
	int time;

	printf("다운받아야 할 파일의 크기를 입력하세요:");
	scanf("%d",&total);

	printf("파일 다운로드 속도를 입력하세요:");
	scanf("%d", &speed);

	time = total / speed;

	printf("다운로드 예상 시간은 %d초입니다. \n", time);

	return 0;
}