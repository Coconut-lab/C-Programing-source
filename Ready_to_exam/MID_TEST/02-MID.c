#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 필드, 레코드, 파일 응용

int main()
{
	int num1, res;
	double score;
	// char grade;

	printf("%s\n", __FILE__);
	printf("%s\n", __TIME__);
	printf("%d\n", __LINE__);
	printf("%s\n", __DATE__);

	while (1) {
		// 학번입력받기
		// 학점입력받기
		// 학번, 학점 출력, 무한반복 count하기 총 3개 데이터 출력
		static int count = 1;	// 딱 한번 초기화 해야 해서 static 필수

		fprintf(stdout, "학번을 입력하세요: ");
		res = scanf("%d", &num1);

		if (res == -1) {
			break;
		}

		fprintf(stdout, "학점을 입력하세요: ");
		scanf("%lf", &score);

		fprintf(stdout, "순번 %d, 학번 %d, 학점 %.3lf\n", count, num1, score);
		count++;
	}

	return 0;
}