#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i, j, num = 0;
	int arr[4][5];

	for (i = 0; i < 4; i++) {			// 짝수 입력
		for (j = 0; j < 5; j += 2) {
			arr[i][j] = num;
			num += 2;
		}
	}

	num = 1;
	for (j = 1; j < 5; j += 2) {	// 홀수 입력
		for (i = 0; i < 4; i++) {
			arr[i][j] = num;
			num += 2;
		}
	}

	for (i = 0; i < 4; i++) {		// 출력부
		for (j = 0; j < 5; j++) {
			printf("%02d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}