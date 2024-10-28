#include <stdio.h>

#define KOR 1130
#define JPY 111
#define CNY 6.5

int main()
{
	int dollar;

	printf("달러를 입력하세요 : ");
	scanf("%d", &dollar);

	printf("%d 달러는 %d원, %d엔, %.2lf위안 입니다.\n", dollar, dollar*KOR, dollar*JPY, dollar*CNY);

	return 0;
}