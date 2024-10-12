#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int checkInt(int a, int b) {
    if (a > b) {
        return 1;
    } else if (a < b) {
        return 2;
    } else {
        return 3;
    }
}

int main() {
    int num1, num2;
    char input[20];

    while (1) {
        printf("2개 숫자 입력(예: 2 5): ");
        fgets(input, sizeof(input), stdin);

        if (sscanf(input, "%d %d", &num1, &num2) == 2) {
            int result = checkInt(num1, num2);

            switch (result) {
                case 1:
                    printf("큰 값: %d, 작은 값: %d\n", num1, num2);
                    printf("----------------------------------\n");
                break;
                case 2:
                    printf("큰 값: %d, 작은 값: %d\n", num2, num1);
                    printf("----------------------------------\n");
                break;
                case 3:
                    printf("두 수가 같다.\n");
                    printf("----------------------------------\n");
                break;
            }
        } else {
            printf("숫자를 입력하세요. 프로그램을 종료합니다.\n");
            break;
        }
    }

    return 0;
}