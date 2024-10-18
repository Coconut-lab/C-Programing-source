#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int result;
    for (int i = 1; i < 10; i++) {
        result = i * i;
        if (result % 10 == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}