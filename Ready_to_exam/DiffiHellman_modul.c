#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void line_make();
int create_encryption(int public_key, int private_key);
int get_secret(int encrypted_message, int private_key);

int main(void) {
    int official_num = 8;
    int Apassword = 3, Bpassword = 5;
    int Aresult, Bresult;

    printf("Diffi Hellman 증명 프로그램\n");
    line_make();
    printf("공용키: %d\n", official_num);
    line_make();

    // 각자의 암호문 생성
    Aresult = create_encryption(official_num, Apassword);
    Bresult = create_encryption(official_num, Bpassword);

    printf("A의 암호문: %d\n", Aresult);
    printf("B의 암호문: %d\n", Bresult);
    line_make();

    // 공통 비밀값 계산
    printf("A의 공통 비밀값: %d\n", get_secret(Bresult, Apassword));
    printf("B의 공통 비밀값: %d\n", get_secret(Aresult, Bpassword));
    line_make();

    return 0;
}

// 암호문을 생성하는 함수
int create_encryption(int public_key, int private_key) {
    return public_key ^ private_key;
}

// 공통 비밀값을 계산하는 함수
int get_secret(int encrypted_message, int private_key) {
    return encrypted_message ^ private_key;
}

void line_make() {
    printf("------------------------\n");
}