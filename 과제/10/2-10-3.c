#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SIZE 100

int main(void) {
    char num[MAX_SIZE];
    int count = 0;
    char ch;

    while (count < MAX_SIZE) {
        scanf(" %c", &num[count]);
        if (num[count] == '?') {
            break;
        }

        printf("%c\n", num[count]);
        count++;
    }

    for (int i = 0; i < count; i++) {
        printf("array[%d] = %c\n", i, num[i]);
    }

    return 0;
}