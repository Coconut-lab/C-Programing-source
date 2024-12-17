#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int age;
    char name[20];

    printf("나이입력: ");
    scanf("%d", &age);

    fflush(stdin);  // 입력 버퍼 비우기

    printf("이름을 입력: ");
    fgets(name, sizeof(name), stdin);

    printf("%d\n", age);
    printf("%s\n", name);
    
    return 0;
}