#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <stdlib.h>


/*
// 함수를 여러개 작성할때 이렇게 작성하면 불편함
int sum(int x, int y) {     // 함수의 정의
    int result = 0;
    result = x + y;
    return result;
}
*/
int sum(int x, int y);     // 함수의 선언, 함수의 리스트
// int sum(int, int);     // 함수의 선언, 함수의 리스트

int main(void) {
    int answer, a1, a2;

    // a1, a2: 외부 입력
    FILE* file1 = NULL;
    file1 = fopen(&"chj09_log.txt", &"a+");
    scanf("%d %d", &a1, &a2);
    answer = sum(3,4);    // 함수의 호출
    fprintf(file1,"%d\n", answer);

    fclose(file1);
    system("notepad.exe chj09_log.txt");

    return 0;
}

int sum(int x, int y) {    // 함수의 정의
    int result;
    result = x + y;
    return result;
}