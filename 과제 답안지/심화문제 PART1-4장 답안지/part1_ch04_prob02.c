#include <stdio.h>

#define KOR 1130
#define JPY 111
#define CNY 6.5

int main()
{
	int dollar;

	printf("�޷��� �Է��ϼ��� : ");
	scanf("%d", &dollar);

	printf("%d �޷��� %d��, %d��, %.2lf���� �Դϴ�.\n", dollar, dollar*KOR, dollar*JPY, dollar*CNY);

	return 0;
}