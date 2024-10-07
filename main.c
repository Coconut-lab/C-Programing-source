#include <stdio.h>

int main(void) {
    int num1 = 10;
    int num2 = -10;

    int result1;
    int result2;

    result1 = num1 >> 1;
    result2 = num2 >> 1;

    printf("result1 = %d\n", result1);
    printf("result2 = %d\n", result2);

    return 0;
}
