#include <stdio.h>   // 표준 입출력 함수를 사용하기 위한 헤더
#include <string.h>  // 문자열 길이 계산(strlen)을 위한 헤더

// 문자열을 뒤집는 재귀 함수
// input: 입력 문자열, output: 결과를 저장할 배열, input_len: 현재 처리할 문자열의 길이
void reverse_recursive(const char *input, char *output, int input_len) {
    // static 변수는 함수가 끝나도 값이 유지됨
    // 여러 번의 재귀 호출에서 출력 위치를 추적하는 용도
    static int output_pos = 0;

    // 종료 조건: 처리할 문자가 없을 때
    if (input_len == 0) {
        output[output_pos] = '\0';  // 문자열의 끝을 표시
        output_pos = 0;  // 다음 호출을 위해 위치 초기화
        return;
    }

    // input의 마지막 문자(input_len - 1)를
    // output의 현재 위치(output_pos)에 저장하고
    // output_pos를 1 증가시킴
    output[output_pos++] = input[input_len - 1];

    // 마지막 문자를 제외한 나머지 문자열에 대해 재귀 호출
    // input_len - 1: 처리할 문자열의 길이를 1 감소
    reverse_recursive(input, output, input_len - 1);
}

int main() {
    // 뒤집을 원본 문자열
    const char *input = "Hello World";

    // 결과를 저장할 배열 (원본보다 충분히 큰 크기로 선언)
    char output[100];

    // 원본 문자열 출력
    printf("원본 문자열: %s\n", input);

    // 재귀 함수 호출
    // strlen(input): 입력 문자열의 길이 계산
    reverse_recursive(input, output, strlen(input));

    // 뒤집어진 결과 출력
    printf("뒤집은 문자열: %s\n", output);

    return 0;
}