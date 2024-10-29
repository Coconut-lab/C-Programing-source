#include "answer2.h"
#include <stdlib.h>

int main(void) {
    int num1, num2, num3, result = 0;

    FILE* file = fopen("answer2.txt", "a+");

    while (1) {
        fprintf(stdout, "첫 번째 수: ");
        fprintf(file, "첫 번째 수: ");
        fscanf(stdin ,"%d", &num1);
        fscanf(file ,"%d", &num1);

        if (num1 == -1) {
            fprintf(stdout, "프로그램을 종료합니다.\n");
            break;
        }

        fprintf(stdout, "두 번째 수: ");
        fprintf(file, "두 번째 수: ");
        scanf("%d", &num2);
        fprintf(stdout, "세 번째 수: ");
        fprintf(file, "세 번째 수: ");
        scanf("%d", &num3);

        result = bigger(num1 ,num2);
        fprintf(stdout, "%d와 %d중 큰 수: %d\n", num1, num2, result);
        fprintf(file, "%d와 %d중 큰 수: %d\n", num1, num2, result);

        result = average(num1, num2, num3);
        fprintf(stdout, "세 수의 평균: %.2lf\n", (double)result);
        fprintf(file, "세 수의 평균: %.2lf\n", (double)result);

        result = factorial(num1);
        fprintf(stdout, "%d의 팩토리얼: %d\n", num1, result);
        fprintf(file, "%d의 팩토리얼: %d\n", num1, result);
    }

    fclose(file);
    // system("notepad.exe answer2.txt");
    system("open answer2.txt");

    return 0;
}