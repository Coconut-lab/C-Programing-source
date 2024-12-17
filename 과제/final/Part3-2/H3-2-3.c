#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char wiki[] = "C is a general-purpose, imperative computer programming language, supporting structured programming, lexical variable scope and recursion, while a static type system prevents many unintended operations. By design, C provides constructs that map efficiently to typical machine instructions, and therefore it has found lasting use in applications that had formerly been coded in assembly language, including operating systems, as well as various application software for computers ranging from supercomputers to embedded systems.";
    char search[100];
    char* anser = NULL;

    printf("검색 단어 입력: ");
    gets(search);

    anser = strstr(wiki, search);

    if (anser == NULL) {
        printf("입력하신 단어가 존재하지 않습니다.\n");
    } else {
        printf("문자열의 시작 위치 %x\n", anser);
        printf("이 후 구절: %s\n", anser);
    }
    
    return 0;
}
