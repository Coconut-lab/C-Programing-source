#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 1000000

int main(void) {
    char ary[MAX];
    char* p = ary;    // 포인터 변수 선언

    for (int i = 0; i < MAX; i++) {
        fprintf(stdout, "%x", p + i);   // 스페이스바 누르면 종료 문자로 인식함 띄어쓰기X
        fprintf(stdout, "%c\n", *(p + i));
    }
    return 0;
}