#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct score {
    int id;
    int score1;
    int score2;
};

int main(void) {
    FILE* stream1;
    FILE* stream2;

    stream1 = fopen("studentscore.txt", "r");
    stream2 = fopen("report.txt", "w");

    struct score data[5] = {0};

    for (int i = 0; i < sizeof(data) / sizeof(struct score); i++) {
        fscanf(stream1, "%d %d %d", &data[i].id, &data[i].score1, &data[i].score2);
    }
    fclose(stream1);

    for (int j = 0; j < sizeof(data) / sizeof(struct score); j++) {
        fprintf(stream2, "학번: %02d, 점수1: %d, 점수2: %d, 합계: %d\n", data[j].id, data[j].score1, data[j].score2, data[j].score1 + data[j].score2);
    }

    fclose(stream2);

    system("open report.txt");

    return 0;
}