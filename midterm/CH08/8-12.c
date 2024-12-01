#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char ch;

    while (1)
    {
        printf("문자를 입력하세요 <q를 입력하면 종료> :");
        scanf(" %c", &ch);

        if (ch == 'q') {
            printf("반복문을 종료합니다.\n");
            break;
        } else {
            printf("%s\n", &ch);
        }
    }

    return 0;
}