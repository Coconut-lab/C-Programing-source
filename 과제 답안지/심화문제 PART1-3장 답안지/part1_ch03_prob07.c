#include <stdio.h>

int main(void)
{
	double wide, height;
	double result;

	printf("사각형의 가로 길이를 입력하세요:");
	scanf("%lf", &wide);
	printf("사각형의 세로 길이를 입력하세요:");
	scanf("%lf", &height);

	result = (wide * height);

	printf("가로 %.2lf, 세로 %.2lf인 사각형의 넓이는 \n%.2lf 입니다. \n", wide, height, result);

	return 0;
}