#include <stdio.h>

int main(void)
{
	int itoa;

	printf("0~127 사이의 정수를 입력하세요 :");
	scanf("%d", &itoa);

	printf("%d의 아스키 코드 값을 갖는 문자는 %c입니다.\n",itoa,itoa);
	

	return 0;
}