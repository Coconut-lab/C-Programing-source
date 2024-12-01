#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add(int x, int z);

void sub(int x, int z);

int main(void) {
    int x, z;
    char c;
    void (*pointer) (int, int) = NULL;

    scanf("%d %c %d", &x, &c, &z);

    if (c == '+') {
        pointer = add;
    } else if (c == '-') {
        pointer = sub;
    }

    pointer(x, z);

    return 0;
}

void add(int x, int z) {
    printf("%d + %d = %d\n", x, z, x + z);
}

void sub(int x, int z) {
    printf("%d - %d = %d\n", x, z, x - z);
}