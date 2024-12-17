#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    FILE* stream;
    stream = fopen("seek.txt", "w");    // 쓰기 모드
    fputs("ABCDEFGHIJ", stream);        // 파일에 문자열 쓰기
    fclose(stream);

    stream = fopen("seek.txt", "r");    // 읽기 모드

    fseek(stream, 0, SEEK_SET);         // 파일 포인터를 3바이트 이동
    fprintf(stdout, "%c\n", fgetc(stream)); // 파일 포인터가 가리키는 위치의 문자 출력 (A)
    fseek(stream, 2, SEEK_SET);         // 파일 포인터를 3바이트 이동
    fprintf(stdout, "%c\n", fgetc(stream)); // 파일 포인터가 가리키는 위치의 문자 출력 (C)
    fseek(stream, -1, SEEK_END);        // 파일 포인터를 1바이트 이전으로 이동
    fprintf(stdout, "%c\n", fgetc(stream)); // 파일 포인터가 가리키는 위치의 문자 출력 (J)
    fseek(stream, -2, SEEK_CUR);        // 파일 포인터를 2바이트 이전으로 이동
    fprintf(stdout, "%c\n", fgetc(stream)); // 파일 포인터가 가리키는 위치의 문자 출력 (I)

    
    return 0;
}