#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 필드, 레코드, 파일 응용

int main() {
	int num1, res;
	double score;
	char grade;

	printf("%s\n", __FILE__);
	printf("%s\n", __TIME__);
	printf("%d\n", __LINE__);
	printf("%s\n", __DATE__);

	while (1) {
		static int count;	// 전역 변수시 0으로 자동 초기화
		count++;

		fprintf(stdout, "학번을 입력하세요: ");
		res = scanf("%d", &num1);

		if (res == EOF) {		// EOF == CTRL+Z == -1
			break;
		}

		fprintf(stdout, "학점을 입력하세요: ");
		scanf("%lf", &score);

		fprintf(stdout, "알파벳을 입력하세요: ");
		scanf(" %c", &grade);

		fprintf(stdout, "순번 %d, 학번 %d, 학점 %.3lf, 알파벳 %c\n", count, num1, score, grade);

	}

	return 0;
}