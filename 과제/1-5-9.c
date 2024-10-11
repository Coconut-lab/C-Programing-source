#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;

    printf("처음 가지고 있는 금액: ");
    scanf("%d원", &a);

    b = a - 700;
    c = b - 500;

    printf("음료를 뽑고 난 후 금액: %d원\n", b);
    printf("커피를 뽑고 난 후 금액: %d원\n", c);

    return 0;
}