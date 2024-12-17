#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int buffer1[5] = {0xff, 0x56, 0x78, 0xfa, 0xf1};
    int buffer2[5];

    FILE* stream;
    stream = fopen("student.dat", "wb");    // 바이너리 모드, 쓰기 모드
    fwrite(buffer1, sizeof(int), 5, stream); // buffer1의 내용을 stream에 쓰기
    fclose(stream);

    stream = fopen("student.dat", "rb");    // 바이너리 모드, 읽기 모드
    fread(buffer2, sizeof(int), 5, stream);  // stream의 내용을 buffer2에 읽기
    printf("%x %x %x %x %x\n", buffer2[0], buffer2[1], buffer2[2], buffer2[3], buffer2[4]);
    fclose(stream);

    return 0;
}