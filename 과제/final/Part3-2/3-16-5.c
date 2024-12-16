#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int seed, quiz, answer;

    printf("srand 속 인자 값 입력: ");
    scanf("%d", &seed);

    srand(seed);
    quiz = rand() % 100;

    printf("생성된 숫자는?: ");
    scanf("%d", &answer);

    if (quiz == answer) {
        printf("정답!\n");
    } else {
        printf("오답! 정답: %d\n", quiz);
    }


    return 0;
}