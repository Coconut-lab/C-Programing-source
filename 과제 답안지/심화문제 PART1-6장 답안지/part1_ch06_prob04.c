#include <stdio.h>

int main()
{
	int kor, eng, math;
	double mean;

	printf("국 영 수 점수를 입력하세요 : ");
	scanf("%d %d %d", &kor, &eng, &math);

	mean = (kor + eng + math) / 3.0;

	printf("평균은 %d 입니다.\n", (int)mean);

	return 0;
}