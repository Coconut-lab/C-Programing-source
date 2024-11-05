#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SIZE 100

int main(void) {
    int num[MAX_SIZE];
    int count = 0;
    char ch;

    while (count < MAX_SIZE) {
        // scanf가 정수를 읽는데 실패하면(문자가 입력되면) 0을 반환
        if (scanf("%d", &num[count]) != 1) {
            scanf(" %c", &ch);  // 입력 버퍼에 남아있는 문자를 읽음
            break;
        }

        printf("%d\n", num[count]);
        count++;
    }

    for (int i = 0; i < count; i++) {
        printf("array[%d] = %d\n", i, num[i]);
    }

    return 0;
}