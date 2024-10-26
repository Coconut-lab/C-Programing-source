#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define KEY 2023    // 암호화에 사용할 키 값
#define MAX 3       // 사용자 수를 3으로 정의

int get_num();
int encript(int);

int main(void) {
    int user[MAX];
    int encripted[MAX];
    int decripted[MAX];

    for (int i = 0; i < MAX; i++) {
        user[i] = get_num();
        printf("%d번째 사용자 비밀번호 입력문: %d\n", i, user[i]);
        encripted[i] = encript(user[i]);
        printf("%d번째 사용자 비밀번호 암호문: %d\n", i, encripted[i]);
        printf("-------------------------------------\n");
    }
}

int get_num() {
    int num;
    scanf("%d", &num);
    return num;
}

int encript(int num) {
    return num ^ KEY;
}

