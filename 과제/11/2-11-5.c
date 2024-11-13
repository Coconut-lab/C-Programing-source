#include <stdio.h>

int main(void) {
    char arr[2][100] = {0};
    int len = 0;

    printf("문자열을 입력하세요: ");
    scanf("%s", arr[0]);

    while(arr[0][len] != '\0') {
        len++;
    }

    for(int i = 0; i < len; i++) {
        arr[1][i] = arr[0][len-1-i];
    }
    arr[1][len] = '\0';

    printf("뒤집은 문자열: %s\n", arr[1]);

    return 0;
}