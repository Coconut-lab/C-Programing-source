#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    FILE* stream1;
    FILE* stream2;

    char name[10] = "";
    int kor = 0, eng = 0, total = 0;

    stream1 = fopen("data4.txt", "r");
    stream2 = fopen("data5.txt", "w");

    fscanf(stream1, "%s %d %d %d", name, &kor, &eng, &total);
    fprintf(stream2, "%s %d %d %d\n", name, kor, eng, total);
    fprintf(stdout, "%s %d %d %d\n", name, kor, eng, total);

    fclose(stream1);
    fclose(stream2);
    
    return 0;
}