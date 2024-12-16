#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
	double x, result;

	printf("x 값을 입력하세요: ");
	scanf("%lf", &x);

	printf("sin(%.3lf) = %.3lf\n", x, sin(x));
	printf("cos(%.3lf) = %.3lf\n", x, cos(x));
	
	result = pow(sin(x), 2) + pow(cos(x), 2);

	printf("sin(%.3lf)^2 + cos(%.3lf)^2 = %lf\n", x, x, result);

	return 0;
}