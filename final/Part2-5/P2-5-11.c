// 계산 프로그램 (문자를 숫자로 바꾸는 변수 사용해서 switch case문 사용)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[ ]) {     // argc : 문자열의 갯수, argv : 문자열의 주소 (포인터 배열)
    int i=0;

    printf("문자열의 수 : %d \n", argc);

    for(i = 0; i < argc; i++) {
        printf("%d번째 문자열 : %s \n", i, argv[i]);
    }
    printf("%s %c\n", argv[1], *(argv[1]+1));   // ABCD B

    return 0;
}