#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NAME1 "차현진"
#define NAME2 "이예빈"

int main(void)
{
    const char NAME3[16] = "차현진";   // char 변수[크기] = 초기화값;
    const char NAME4[16] = "이예빈";   // char 변수[크기] = 초기화값;
    
    printf("제 이름은 %s입니다.\n", NAME1);
    printf("제 이름은 %s입니다.\n", NAME2);
    printf("-----------------\n");
    printf("제 이름은 %s입니다.\n", NAME3);
    printf("제 이름은 %s입니다.\n", NAME4);
    
    return 0;
}
