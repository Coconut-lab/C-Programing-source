#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int kor, eng, math;
    printf("국어, 영어, 수학 점수 입력: ");
    scanf("%d %d %d", &kor, &eng, &math);
    
    printf("평균: %d\n", (kor + eng + math) / 3);
    
    return 0;
}
