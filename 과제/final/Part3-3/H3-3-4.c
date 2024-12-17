#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* stream;
    stream = fopen("hello.txt", "w");

    fprintf(stream,"Hello World!");
    fclose(stream);

    system("open hello.txt");
    
    return 0;
}