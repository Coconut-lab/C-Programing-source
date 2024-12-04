#include <stdio.h>
#include <string.h>

int myStrcmp(char *, char *);

int main(void) {
    char str1[100];
    char str2[100];

    printf("문자열을 입력하세요:");
    scanf("%s", str1);

    printf("비교할 문자열을 입력하세요:");
    scanf("%s", str2);

    int result = myStrcmp(str1, str2);

    if(result == 0) {
        printf("두 문자열은 같은 문자열입니다\n");
    } else {
        printf("두 문자열은 다른 문자열입니다\n");
    }

    return 0;
}

int myStrcmp(char *str1, char *str2) {
    int i = 0;

    while(str1[i] != '\0' || str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            return -1;
        }
        i++;
    }
    return 0;
}