#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    FILE* stream;
    int file_state;

    stream = fopen("data1.txt", "w");
    if (stream == NULL) {
        printf("파일 열기 에러\n");
    }

    file_state = fclose(stream);
    if (file_state == EOF) {
        printf("파일 닫기 에러\n");
    }

    return 0;
}