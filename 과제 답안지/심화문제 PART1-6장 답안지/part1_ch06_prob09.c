#include <stdio.h>

int main(void)
{
	double height, val;
	printf("남학생 A의 키를 입력하세요:");
	scanf("%lf",&height);

	val = (height - 100) * 0.9;

	printf("남학생 A의 표준 체중은 %.2lf입니다.\n", val);

	return 0;
}