#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void line_make();
int main() {
    int official_num = 2024;
    int Apassword = 1234, Bpassword = 5678;
    int Aresult, Bresult;

    printf("Diffi Hellman 증명 프로그램\n");
    line_make();
    printf("공용키: %d\n", official_num);
    line_make();

    Aresult = official_num ^ Apassword;
    Bresult = official_num ^ Bpassword;

    printf("A의 암호문: %d\n", Aresult);
    printf("B의 암호문: %d\n", Bresult);
    line_make();

    printf("A의 공통 비밀값: %d\n", Bresult ^ Apassword);
    printf("B의 공통 비밀값: %d\n", Aresult ^ Bpassword);
    line_make();


    return 0;
}

void line_make() {
    printf("------------------------\n");
}