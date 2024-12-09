#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
    char name[20];
    struct TestScore {
        int id;
        double first;
        double second;
    } score;
};

int main(void) {
    double A1_avg, B1_avg, A2_avg, B2_avg;

    struct student d[3] = {
        {"A", {1, 96, 78}},
        {"A", {2, 86, 86}},
        {"A", {3, 74, 92}}
    };
    struct student n[3] = {
        {"B", {1, 96, 84}},
        {"B", {2, 80, 88}},
        {"B", {3, 66, 100}}
    };


    A1_avg = (d[0].score.first + d[1].score.first + d[2].score.first) / 3;
    B1_avg = (n[0].score.first + n[1].score.first + n[2].score.first) / 3;
    A2_avg = (d[0].score.second + d[1].score.second + d[2].score.second) / 3;
    B2_avg = (n[0].score.second + n[1].score.second + n[2].score.second) / 3;

    printf("[두 반의 성적 평균 비교]\n");
    printf("1차: %c반 %.2lf점, %c반 %.2lf점\n", d[0].name[0], A1_avg, d[1].name[0], B1_avg);
    printf("2차: %c반 %.2lf점, %c반 %.2lf점\n", n[0].name[0], A2_avg, n[1].name[0], B2_avg);
    
    return 0;
}