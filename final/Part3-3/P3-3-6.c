#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100

int main(void) {
    FILE* stream;
    char buffer[50];

    stream = fopen("data3.txt", "w");
    if (stream == NULL) {
        puts("파일 열기 오류");
    }

    fgets(buffer, sizeof(buffer), stdin);
    fputs(buffer, stream);

    fclose(stream);
    
    return 0;
}