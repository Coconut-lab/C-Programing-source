#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int sum(int*, int*);     // 함수의 선언, 함수의 리스트

int main(void) {
    int answer, a1, a2;

    // a1, a2: 외부 입력
    FILE* file1 = NULL;
    file1 = fopen("chj09_log.txt", "a+");
    printf("수 2개 입력: ");
    scanf("%d %d", &a1, &a2);

    answer = sum(&a1,&a2);    // 함수의 호출 (call by address)

    fprintf(stdout,"%d\n", answer);
    fprintf(file1,"%d\n", answer);

    fclose(file1);
    // system("notepad.exe chj09_log.txt");   // 윈도우에서 실행
    system("open chj09_log.txt");   // 맥에서 실행


    return 0;
}

int sum(int* x, int* y) {    // 함수의 정의
    int result;
    result = *x + *y;
    return result;
}

// int* sum...      // 주소를 리턴함