#include <stdio.h>

int main()
{
	int first=0, second=0, temp, i;

	for (i = 0; i < 5; i++)
	{
		printf("정수를 입력하세요 : ");
		scanf("%d", &temp);

		if (first < temp)
		{
			second = first;
			first = temp;
		}
		else if (second < temp)
		{
			second = temp;
		}	
	}
	printf("두 번째로 작은 수 : %d\n", second);
	return 0;
}