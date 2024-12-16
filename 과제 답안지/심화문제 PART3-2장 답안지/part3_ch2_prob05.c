#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input, i, result, num;

	printf("srand 속 인자 값 입력: ");
	scanf("%d", &input);

	srand(input);

	result = rand() % 100;

	printf("생성된 숫자는?: ");
	scanf("%d", &num);

	if (result == num)
		puts("정답!");
	else
		printf("오답! 정답: %d\n", result);


	return 0;
}

