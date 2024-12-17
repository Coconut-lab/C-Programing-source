#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    FILE* stream;
    long distance;

    stream = fopen("ftell.txt", "w");
    fputs("ABCDEFGHIJ", stream);
    fclose(stream);

    stream = fopen("ftell.txt", "r");

    fseek(stream, -8, SEEK_END);
    fprintf(stdout, "%c\n", fgetc(stream)); // 파일 포인터가 가리키는 위치의 문자 출력 (C)

    distance = ftell(stream);
    printf("거리: %ld\n", distance);  // 파일 포인터의 위치 출력
    fclose(stream);
    
    return 0;
}