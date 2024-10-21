#include<stdio.h>

int sum(int x, int y);

int minus(int x, int y);

int multi(int x, int y);

double divide(int x, int y);





int main() {

	char pmmd;
	int j = 1, fin;
	double divfin;
	int num1, num2;


	while (j == 1) {

		printf("계산식 입력: ");

		scanf("%d %c %d", &num1, &pmmd, &num2);



		if (pmmd == '+') {

			fin = sum(num1, num2);

			printf("결과: %d\n", fin);

		}

		else if (pmmd == '-') {

			fin = minus(num1, num2);

			printf("결과: %d\n", fin);

		}

		else if (pmmd == '*') {

			fin = multi(num1, num2);

			printf("결과: %d\n", fin);

		}

		else if (pmmd == '/') {

			divfin = divide(num1, num2);

			printf("결과: %.2lf\n", divfin);

		}

		else {

			printf("입력이 올바르지 않습니다.\n");

			j = 0;

			break;

		}

	}

	return 0;

}





int sum(int x, int y) {

	int result;

	result = x + y;

	return result;

}

int minus(int x, int y) {

	int result;

	result = x - y;

	return result;

}

int multi(int x, int y) {

	int result;

	result = x * y;

	return result;

}

double divide(int x, int y) {

	double result;

	result = (double)x / y;

	return result;

}
