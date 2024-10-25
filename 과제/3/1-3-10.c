#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b;
    
    printf("다운받아야 할 파일의 크기를 입력하세요: ");
    scanf("%d", &a);
    printf("파일 다운로드 속도를 입력하세요: ");
    scanf("%d", &b);
    printf("다운로드 예상 시간은 %d초입니다.\n", a / b);
    
    return 0;
}

