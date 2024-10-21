#include <stdio.h>

typedef unsigned int pm;

int main(void)
{
	pm pmtom;
	double mm;
	printf("제곱미터로 변환할 평방미터(평)를 입력하세요:");
	scanf("%d",&pmtom);
	mm = (pmtom)*3.3;

	printf("%d평은 %.2lf제곱미터입니다.\n",pmtom,mm);

	return 0;
}