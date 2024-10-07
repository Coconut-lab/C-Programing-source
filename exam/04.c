#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define KEY 2023    // 암호화에 사용할 키 값
#define MAX 3       // 사용자 수를 3으로 정의

// 함수 선언
// 사용자로부터 정수를 입력받는 함수
int get_num();

// 비밀번호를 암호화하는 함수
int encript(int);

int main(void) {
    int user[MAX];          // 원본 비밀번호를 저장할 배열
    int encription[MAX];    // 암호화된 비밀번호를 저장할 배열

    // 사용자 비밀번호 3개 키보드 입력
    for (int i = 0; i < MAX; i++) {
        // 사용자에게 비밀번호 입력 안내 메시지 출력
        printf("%d번째 사용자 비밀번호 입력문: ", i);

        // get_num() 함수를 호출하여 사용자 입력을 받고, user 배열에 저장
        user[i]= get_num();
    }

    // 비밀번호 암호화 함수 구현
    for (int i = 0; i < MAX; i++) {
        // encript() 함수를 사용하여 각 비밀번호를 암호화
        encription[i] = encript(user[i]);
    }

    printf("-------------------------------------\n");

    // 암호화된 비밀번호 저장 및 출력
    for (int i = 0; i < MAX; i++) {
        // 원본 비밀번호와 암호화된 비밀번호를 함께 출력
        printf("%d번째 사용자 비밀번호 입력문: %d\n", i, user[i]);
        printf("%d번째 사용자 비밀번호 암호문: %d\n", i, encription[i]);
        printf("-------------------------------------\n");
    }

    return 0;
}

// 비밀번호를 암호화하는 함수
int encript(int num) {
    return num ^ KEY;       // XOR 연산자 사용 ( ^ )
}

// 사용자로부터 정수를 입력받는 함수
int get_num() {
    int num;
    scanf("%d", &num);      // 정수 입력받기
    return num;             // 입렫받은 정수 반환
}