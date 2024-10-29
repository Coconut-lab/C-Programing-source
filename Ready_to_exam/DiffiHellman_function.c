#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define  official_num 2024     // 공용키
#define Apassword 1234        // A의 비밀값
#define Bpassword 5678       // B의 비밀값

void line_make(void);
int public_transport(int);

int main() {
    int Aresult, Bresult;

    printf("Diffi Hellman 증명 프로그램\n");
    line_make();
    printf("공용키: %d\n", official_num);
    line_make();

    Aresult = public_transport(Apassword);
    Bresult = public_transport(Bpassword);

    printf("A의 암호문: %d\n", Aresult);
    printf("B의 암호문: %d\n", Bresult);
    line_make();

    printf("A의 공통 비밀값: %d\n", Bresult ^ Apassword);
    printf("B의 공통 비밀값: %d\n", Aresult ^ Bpassword);
    line_make();


    return 0;
}

void line_make(void) {
    printf("------------------------\n");
}

int public_transport(int num) {
    int result;
    result = official_num ^ num;
    return result;
}