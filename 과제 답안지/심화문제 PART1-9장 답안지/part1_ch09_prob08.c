#include <stdio.h>

int checkInt(int a, int b);

int main()
{
	int a, b, check;
	printf("두 숫자를 입력하세요 : ");
	scanf("%d %d", &a, &b);

	printf("숫자 %d 는 %d",a ,b);

	switch (checkInt(a, b))
	{
	case 0:
		printf("와 같습니다.\n");
		break;
	case 1:
		printf("보다 큽니다.\n");
		break;
	case -1:
		printf("보다 작습니다.\n");
		break;
	}
	
	return 0;
}

int checkInt(int a, int b)
{
	if (a == b)
		return 0;
	else if (a > b)
		return 1;
	else
		return -1;
}