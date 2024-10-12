#include <stdio.h>

char check(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + 32;  // ASCII에서 대문자와 소문자의 차이는 32
    } else if (ch >= 'a' && ch <= 'z') {
        return ch - 32;
    } else {
        return ch;
    }
}

int main() {
    char input;

    while (1) {
        printf("문자 입력: ");
        scanf(" %c", &input);

        // 교수님께 질문하기
        if (input >= '0' && input <= '9') {
            printf("반복 문자 입력을 종료합니다.\n");
            break;
        }

        char result = check(input);
        printf("변경 전: %c 변경 후: %c\n", input, result);
        printf("--------------------------\n");
    }

    return 0;
}