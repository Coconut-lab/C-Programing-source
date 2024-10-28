#include <stdio.h>

int main(void)
{
	int r;
	double result1, result2;

	printf("원의 반지름을 입력하세요. :");
	scanf("%d", &r);

	result1 = 3.14*r*r;
	result2 = 2 * 3.14*r;

	printf("원의 넓이: %.2lf \n", result1);
	printf("원의 둘레: %.2lf \n", result2);
	

	return 0;
}