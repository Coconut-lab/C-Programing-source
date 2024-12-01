#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int age;
    printf("What is your age?: ");
    scanf("%d", &age);
    printf("Wow! Really? Are you %d years old?\n", age);

    return 0;
}