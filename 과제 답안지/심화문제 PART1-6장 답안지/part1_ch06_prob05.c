#include <stdio.h>

int main()
{
	typedef unsigned int high;

	high h;

	printf("신장(키)을 입력하세요(cm) : ");
	scanf("%d", &h);

	printf("당신의 신장은 %.2lfm 입니다.\n", h/100.0);
	return 0;
}