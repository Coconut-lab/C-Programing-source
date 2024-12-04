#include <stdio.h>

int main(void)
{
	int num, i, j, cnt;

	printf("자연수 n을 입력하세요:");
	scanf("%d",&num);

	for (i = 1; i <= num; i++) {
		cnt = 0;

		for (j = 1; j <= i; j++) {
			if (i % j == 0) {
				cnt++;
			}
		}

		if (cnt == 2) {
			printf(" [%2d] ", i);
		} else {
			printf("  %2d  ", i);
		}

		if (i % 10 == 0) {
			printf("\n");
		}
	}

	return 0;
}