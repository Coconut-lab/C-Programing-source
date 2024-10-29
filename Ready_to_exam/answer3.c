#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void line_make(void);
int create_encryption(int public_key, int private_key);
int get_secret(int encrypted_message, int private_key);

int main(void) {
    int official_num = 2024;
    int Apassword, Bpassword;
    int Aresult, Bresult;
    int A_final_result, B_final_result;

    printf("첫 번째 비밀번호 입력하세요: ");
    scanf("%d", &Apassword);
    printf("두 번째 비밀번호 입력하세요: ");
    scanf("%d", &Bpassword);
    printf("\n");

    printf("====== 암호화 결과 ======\n");
    printf("공용키: %d\n", official_num);
    line_make();
    printf("첫 번째 원본 비밀번호: %d\n", Apassword);
    printf("두 번째 원본 비밀번호: %d\n", Bpassword);
    line_make();

    Aresult = create_encryption(official_num, Apassword);
    Bresult = create_encryption(official_num, Bpassword);

    printf("첫 번째 암호문: %d\n", Aresult);
    printf("두 번째 암호문: %d\n", Bresult);
    line_make();

    A_final_result = get_secret(Bresult, Apassword);
    B_final_result = get_secret(Aresult, Bpassword);

    printf("첫 번째 공통 비밀값: %d\n", Aresult);
    printf("두 번째 공통 비밀값: %d\n", Bresult);
    line_make();

    FILE* file = fopen("password.txt", "a+");

    fprintf(file, "암호화된 비밀번호 A: %d\n", Aresult);
    fprintf(file, "암호화된 비밀번호 B: %d\n", Bresult);
    fprintf(file, "암호화된 공통 비밀번호 A: %d\n", A_final_result);
    fprintf(file, "암호화된 공통 비밀번호 B: %d\n", B_final_result);

    fclose(file);
    printf("암호화된 비밀번호가 password.txt 파일에 저장되었습니다.\n");

    system("open password.txt");

    return 0;
}

void line_make(void) {
    printf("======================\n");
}

int create_encryption(int public_key, int private_key) {
    return public_key ^ private_key;
}

// 공통 비밀값을 계산하는 함수
int get_secret(int encrypted_message, int private_key) {
    return encrypted_message ^ private_key;
}