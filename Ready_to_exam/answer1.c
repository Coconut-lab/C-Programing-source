// switch-case를 사용해서 계산기를 만들어라
#include "answer1.h"

int sum(int, int);
int minus(int, int);
int multiply(int, int);
double divide(int, int);

int main(void) {
    int cal, num1, num2, result;
    double diviResult;

    while(1) {
        fprintf(stdout, "숫자를 입력하세요(1은 +, 2는 -, 3은 /, 4는 *, 5는 종료): ");
        scanf("%d", &cal);

        if (cal == 5) {
            fprintf(stdout, "프로그램을 종료합니다.\n");
            break;
        }

        fprintf(stdout, "두 개의 숫자를 입력하세요: ");
        scanf("%d %d", &num1, &num2);

        switch (cal) {
            case 1:
                result = sum(num1, num2);
                fprintf(stdout, "덧셈 결과: %d\n", result);
                break;
            case 2:
                result = minus(num1, num2);
                fprintf(stdout, "뺄셈 결과: %d\n", result);
                break;
            case 3:
                result = multiply(num1, num2);
                fprintf(stdout, "곱셈 결과: %d\n", result);
                break;
            case 4:
                diviResult = divide(num1, num2);
                fprintf(stdout, "나눗셈 결과: %lf\n", diviResult);
                break;
        }
    }
}