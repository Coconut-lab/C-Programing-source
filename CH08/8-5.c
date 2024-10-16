#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // System 함수 호출

int main(void) {
    int num;

    FILE* file = fopen("CHJ_log02.txt", "a+");

    fprintf(stdout,"숫자 입력: ");
    fprintf(file,"숫자 입력: ");
    scanf("%d", &num);

    if (num > 0) {
        fprintf(stdout,"0보다 큰 수가 num에 저장\n");
        fprintf(file,"0보다 큰 수가 num에 저장\n");
    } else if (num == 0) {
            fprintf(stdout,"0이 num에 저장\n");
            fprintf(file,"0이 num에 저장\n");
    } else {
        fprintf(stdout,"0보다 작은수가 num에 저장\n");
        fprintf(file,"0보다 작은수가 num에 저장\n");
    }

    fclose(file);
    system("notepad.exe CHJ_log02.txt");
    return 0;
}