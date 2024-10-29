// 질문 받은 코드 테스트 장소

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int create_encryption(int public_key, int private_key);
int get_secret(int encrypted_message, int private_key);

int main()
{
    int KEY = 2024;
    int num1, num2;
    int  result1 = 0;
    int  result2 = 0;
    int  result3 = 0;
    int  result4 = 0;

    fprintf(stdout, "첫 번째 비밀번호를 입력하세요 : ");
    scanf("%d", &num1);
    fprintf(stdout, "두 번째 비밀번호를 입력하세요 : ");
    scanf("%d", &num2);


    fprintf(stdout, "========암호화 결과========\n");
    fprintf(stdout, "공용키 : %d\n", KEY);
    fprintf(stdout, "===========================\n");

    fprintf(stdout, "첫 번째 원본 비밀번호 : %d\n", num1);
    fprintf(stdout, "두 번째 원본 비밀번호 : %d\n", num2);

    result1 = create_encryption(KEY, num1);
    result2 = create_encryption(KEY, num2);

    fprintf(stdout, "===========================\n");
    fprintf(stdout, "첫 번째 암호문 : %d\n", result1);
    fprintf(stdout, "두 번째 암호문 : %d\n", result2);
    fprintf(stdout, "===========================\n");

    result3 = get_secret(result2, num1);
    result4 = get_secret(result1, num2);

    fprintf(stdout, "첫 번째 암호문 : %d\n", result3);
    fprintf(stdout, "두 번째 암호문 : %d\n", result4);

    return 0;
}
int create_encryption(int public_key, int private_key)
{
    return public_key ^ private_key;
}
int get_secret(int encrypted_message, int private_key)
{
    return encrypted_message ^ private_key;
}