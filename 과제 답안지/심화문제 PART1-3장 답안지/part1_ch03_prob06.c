#include <stdio.h>

int main(void)
{
	double wide, height;
	double result;

	printf("사각형의 가로 길이를 입력하세요:");
	scanf("%lf",&wide);
	printf("사각형의 세로 길이를 입력하세요:");
	scanf("%lf",&height);
	
	result = 2 * (wide + height);

	printf("가로 %lf, 세로 %lf인 사각형의 둘레는 \n%lf 입니다. \n",wide,height,result);

	return 0;
}