#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    FILE* stream;
    stream = fopen("test.txt", "rt");    // 경로 (read text)

    stream = fopen("test.txt", "r");    // 경로 (read / text는 생략)

    stream = fopen("test.txt", "w");    // 경로 (write / text는 생략)

    stream = fopen("test.txt", "ab");    // 경로 (read binary)

    return 0;
}