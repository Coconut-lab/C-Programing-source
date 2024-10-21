#pragma warning(disable:4996)

#include <stdio.h>
#include <Windows.h>
#include <time.h>

int main()
{
	clock_t start, end, i;

	start = clock();

	for (i = 1; i < 5001; i++)
	{
		printf("%d 번째 출력.\n", i);
	}
	end = clock();

	printf("\n실행 시간 : %lf 초\n", (double)(end - start) / CLOCKS_PER_SEC);

	return 0;
}

/*
측정하고자 하는 프로세스 (for()문 5000번) 의 바로 전과 후에 시간을 측정하고
두 시간 사이의 차이를 계산합니다.

편의를 위해 for문의 조건으로 i=1; i<5001; i++ 을 사용합니다.
*/