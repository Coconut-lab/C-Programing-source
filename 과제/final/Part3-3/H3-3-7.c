#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE* stream = fopen("fruitList.txt", "r");
    FILE* stream2 = fopen("berry.txt", "w");
    FILE* stream3 = fopen("noneberry.txt", "w");
    char str1[100];
    char berry[20] = "berry";


    while (!feof(stream)) {
        fgets(str1, sizeof(str1), stream);  // 파일에서 한 줄을 읽어서 str1에 저장
        if (strstr(str1, berry) != NULL) {
            fputs(str1, stream2);
        } else {
            fputs(str1, stream3);
        }
    }

    fclose(stream);
    fclose(stream2);
    fclose(stream3);

    system("open berry.txt");
    system("open noneberry.txt");

    return 0;
}
