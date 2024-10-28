#include <stdio.h>

int main()
{
	const int dumpling = 800;
	int count;

	printf("만두 개수를 입력하세요 : ");
	scanf("%d", &count);

	printf("총 가격은 %d원 입니다.\n", count*dumpling);

	return 0;
}