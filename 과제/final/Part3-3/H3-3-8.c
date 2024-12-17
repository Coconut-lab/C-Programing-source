#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE* stream;
    stream = fopen("a.txt", "a+");
    char ch[500];
    char exit[5] = "exit";

    while (1) {
        fgets(ch, 500, stdin);
        if (strstr(ch, exit) != NULL) {
            break;
        }
        fprintf(stream,"%s",ch);
    }

    fclose(stream);

    system("open a.txt");

    return 0;
}