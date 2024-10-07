#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10

int main(void) {
    int i = 0, sum = 0;
    unsigned int num1;
    int cnt = 0;

    /*
    fprintf(stdout,"while 반복문 코드\n");
    while (i <= 10) {
        sum += i;
        printf("i = %d, sum = %d\n", i, sum);
        i++;
    }
    */
    /*
    fprintf(stdout,"for 반복문 코드\n");
    for (i = 0, sum = 0; i <= MAX; i++) {
        sum += i;
        fprintf(stdout,"i = %d, sum = %d\n", i, sum);
    }
    */
    for (num1 = 2; num1 <= MAX; num1 += 1) {
        if (num1 % 2 == 0) {
            cnt++;
            printf("%010d %d\n", cnt, num1);
        }
    }
    printf("end: %d\n", num1);

    fprintf(stdout,"----반복문 종료----\n");

    return 0;
}