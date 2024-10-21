#include <stdio.h>
#include <stdlib.h>

#define NUMBER1 "1234"
#define NUMBER2 "4321"
int main()
{
	printf("문자열 %s와 %s의 숫자 합은 %d 입니다.\n",NUMBER1, NUMBER2, atoi(NUMBER1) + atoi(NUMBER2));

	return 0;
}