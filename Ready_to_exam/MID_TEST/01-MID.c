#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 예상문제 파일 입출력 응용

int main()
{
	char n;
	int res;

	printf("%s\n", __FILE__);
	printf("%s\n", __TIME__);
	printf("%d\n", __LINE__);
	printf("%s\n", __DATE__);

	while (1)
	{
		// 무한 반복 루프
		// 1. 문자 한개를 입력 받는다.
		// 2. 문자 입력 받을 때, ctrl+z == -1 을 받으면 무한반복 탈출
		// 3. 입력받은 문자 출력
	
		fprintf(stdout,"\n문자 한개를 입력하세요: ");
		res = scanf(" %c", &n);		// enter키 까지 입력 받아서 % 앞에 띄어쓰기 필요 또는 getchar(); 사용

		if (res == -1) {
			break;
		}

		fprintf(stdout, "%c\n", n);
	}

	return 0;
}