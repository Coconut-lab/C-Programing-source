#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 혼동 행렬 입력 받기
    int tp, fn, fp, tn;
    scanf("%d %d %d %d", &tp, &fn, &fp, &tn);

    // 성능 지표 계산
    double precision = tp / (double)(tp + fp);
    double accuracy = (tp + tn) / (double)(tp + fn + fp + tn);
    double recall = tp / (double)(tp + fn);
    double f1 = 2 * precision * recall / (precision + recall);

    // 결과 출력
    printf("결과\n");
    printf("Accuracy (정확도): %.4f\n", accuracy);
    printf("Precision (정밀도): %.4f\n", precision);
    printf("Recall (재현율): %.4f\n", recall);
    printf("F1 Score: %.4f\n", f1);

    return 0;
}