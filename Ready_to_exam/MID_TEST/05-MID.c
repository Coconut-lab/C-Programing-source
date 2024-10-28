#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 탈출조선, 파일출력 응용

int main() {
	int num1, num2;
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

		fprintf(stdout, "숫자 2개 입력: ");
		scanf("--%d--%d", &num1,&num2);
		getchar();		// 필수

		fprintf(stdout, "순번 %d, 첫 번째 수 %d, 두 번째 수 %d, 결과 %d\n", count, num1, num2, num1 + num2);
		fprintf(stdout, "---------------------------------------------\n");
		count++;
	}

	return 0;
}