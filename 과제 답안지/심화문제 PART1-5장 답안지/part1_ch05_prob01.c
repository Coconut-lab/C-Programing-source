#include <stdio.h>

int main()
{
	int num, digit_ten, digit_unit;

	printf("십의 자리 숫자를 입력하세요 : ");
	scanf("%d", &num);

	digit_ten = num / 10;
	digit_unit = num % 10;

	printf("숫자 %d의 십의 자리와 일의 자릿수의 합은 %d입니다.\n", num, digit_ten + digit_unit);

	return 0;
}