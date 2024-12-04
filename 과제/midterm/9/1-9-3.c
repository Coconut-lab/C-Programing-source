#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu(void);
double sum(double, double);
double minus(double, double);
double multiply(double, double);
double divide(double, double);

int main(void) {
    int num;
    double a, b;
    char cal;

    while (1) {
        menu();
        printf("메뉴 번호를 입력하세요: ");
        scanf("%d", &num);

        switch (num) {
            case 1:
                printf("식을 입력하세요: ");
                scanf("%lf %c %lf", &a, &cal, &b);

                switch (cal) {
                    case '+':
                        printf("결과: %.1lf\n", sum(a, b));
                        break;
                    case '-':
                        printf("결과: %.1lf\n", minus(a, b));
                        break;
                    case '*':
                        printf("결과: %.1lf\n", multiply(a, b));
                        break;
                    case '/':
                        printf("결과: %.1lf\n", divide(a, b));
                        break;
                }
                break;
            case 0:
                printf("프로그램을 종료합니다.\n");
                return 0;
        }
    }

}

void menu(void) {
    printf("======== MENU ========\n");
    printf("1. 프로그램 시작\n");
    printf("0. 프로그램 종료\n");
    printf("----------------------\n");
}

double sum(double a, double b) {
    return a + b;
}
double minus(double a, double b) {
    return a - b;
}
double multiply(double a, double b) {
    return a * b;
}
double divide(double a, double b) {
    return a / b;
}