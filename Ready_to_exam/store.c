#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int start_time;    // 시작 시간 (0~23)
    int end_time;      // 종료 시간 (0~23)
    int work_hours;    // 일한 시간
    int normal_pay = 9860;  // 기본 시급
    int total_pay = 0;     // 총 급여
    int current_time;      // 현재 시간
    int night_pay = (int)(normal_pay * 1.5);  // 야간 수당

    printf("근무 시간 입력(시작 종료): ");
    scanf("%d %d", &start_time, &end_time);

    // 일한 시간 계산
    if (end_time > start_time) {
        work_hours = end_time - start_time;
    } else {
        work_hours = (24 - start_time) + end_time;
    }

    current_time = start_time;

    while(1) {
        // 야간 시간대(22시~06시) 체크
        if (current_time >= 22 || current_time < 6) {
            total_pay += night_pay;
        } else {
            total_pay += normal_pay;
        }

        work_hours--;

        if (work_hours <= 0) {
            break;
        }

        current_time++;
        if (current_time >= 24) {
            current_time = 0;
        }
    }

    printf("총 급여: %d원\n", total_pay);
    return 0;
}