#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double get_num(void);
void print_line(void);
double sum(double arr[], int size);

int main(void) {
    double num[5];

    printf("수열 5개 입력 (예: 1 3 5 7 9): ");
    for (int i = 0; i < 5; i++) {
        num[i] = get_num();
    }

    print_line();

    printf("입력된 수열 확인: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2lf ", num[i]);
    }
    printf("\n");

    print_line();

    double result = sum(num, 5);
    printf("수열의 합: %.2lf\n", result);

    print_line();

    return 0;
}

// double arr[] **
double sum(double arr[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

void print_line(void) {
    printf("----------------------------\n");
}

double get_num(void) {
    double num;
    scanf("%lf", &num);
    return num;
}