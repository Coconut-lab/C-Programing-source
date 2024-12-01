#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>     // system 함수 호출

int main(void) {
    int i, j;
    int result = 0; //구구단의 결과 저장 변수

    FILE* file1=NULL;   // 초기화 (0을 적어도 가능)
    file1 = fopen("log.txt", "w");      // 4바이트 (+a는 파일 아레에 추가로 작성)

    for (i = 2; i < 10; i++) {
        for (j = 1; j < 10; j++) {
            result = i * j;
            printf("%d * %d = %d\n", i, j, result);
            fprintf(file1, "%d * %d = %d\n", i, j, result);
        }
        printf("-------------\n");
        fprintf(file1,"-------------\n");
    }

    fclose(file1);
    system("notepad.exe log.txt");     // 윈도우만 가능
    system("notepad.exe 7-10.c");
    printf("파일이 생성되었습니다.\n");

    return 0;
}