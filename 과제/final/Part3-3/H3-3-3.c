#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* stream = fopen("warning.txt", "r");
    char str1[500];

    /*
    첫 번째 루프:
    fgets가 "이 책은 저작권법에 따라 보호받는 저작물이므로\n"를 읽음
    fputs가 이를 출력하고 '\n'을 만나서 줄바꿈

    두 번째 루프:
    fgets가 "무딘 전재와 무단 복제를 금합니다."를 읽음
    fputs가 이를 출력
    */
    while (!feof(stream)) {
        fgets(str1, sizeof(str1), stream);  // 파일에서 한 줄을 읽어서 str1에 저장
        fputs(str1, stdout);    // fputs가 출력하고 \n를 만나서 줄바꿈을 함
    }

    fclose(stream);
    puts("");

    system("open warning.txt");
    
    return 0;
}
