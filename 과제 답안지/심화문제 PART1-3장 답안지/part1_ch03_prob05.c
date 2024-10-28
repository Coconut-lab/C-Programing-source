#include <stdio.h>

int main()
{
	int num, total=0;

	printf("숫자 5개를 입력하세요 : ");

	scanf("%d", &num);
	total = total + num;

	scanf("%d", &num);
	total = total + num;

	scanf("%d", &num);
	total = total + num;

	scanf("%d", &num);
	total = total + num;

	scanf("%d", &num);
	total = total + num;

	printf("입력한 숫자의 총 합 : %d\n", total);
}