#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct animal {
    int count;
    char name[20];
};

int main(void) {
    FILE* stream;
    stream = fopen("animal.txt", "r");

    struct animal data[3] = {0};

    for (int i = 0; i < sizeof(data) / sizeof(struct animal); i++) {
        fscanf(stream, "%d %s", &data[i].count, data[i].name);
    }

    for (int i = 0; i < sizeof(data) / sizeof(struct animal); i++) {
        for (int j = 0; j < data[i].count; j++) {
            printf("%s ", data[i].name);
        }
        printf("\n");
    }

    fclose(stream);
    
    return 0;
}