#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 탈출조선, 파일출력 응용

int main() {
	int num1;
	double score;
	char grade;

	printf("%s\n", __FILE__);
	printf("%s\n", __TIME__);
	printf("%d\n", __LINE__);
	printf("%s\n", __DATE__);

	while (1) {
		static int count = 1;

		if (count >= 100) {
			break;
		}

		fprintf(stdout, "데이터를 입력 (학번 학점 알파벳): ");
		scanf("%d %lf %c", &num1, &score, &grade);


		fprintf(stdout, "순번 %d, 학번 %d, 학점 %.3lf, 알파벳 %c\n", count, num1, score, grade);
		fprintf(stdout, "--------------------------------------\n");
		count++;
	}

	return 0;
}