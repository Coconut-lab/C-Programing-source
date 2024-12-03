#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
    char* no;    // 멤버 변수로 포인터 선언
    char* name;  // 멤버 변수로 포인터 선언
};

int main(void) {
    int i = 0;
    struct student stu;

    // 멤버 변수로 포인터 선언했으므로 문자열을 입력할 수 있음
    stu.no, "20101323";
    stu.name, "Park";

    printf("학번: %s, 이름: %s\n", stu.no, stu.name);

    return 0;
}